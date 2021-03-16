//arboles
#include<iostream>
#include<stdlib.h>

using namespace std;
//estrcuturas
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
}*arbol=NULL;;

//prototipos 
void menu();
Nodo *crearNodo(int n);
void insertar(Nodo *&arbol,int n);
void mostrarArbol(Nodo *arbol,int contador);
bool buscar(Nodo *arbol,int n);
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);
void postOrden(Nodo *arbol);

int main(){
	
	menu();
	
	
	system("pause");
	return 0;
}

void menu(){
	int op,num,bus;
	bool encontrado;
	do{
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar arbol"<<endl;
		cout<<"3. Buscar"<<endl;
		cout<<"4. Mostrar en preorden"<<endl;
		cout<<"5: Mostrar en inOrden"<<endl;
		cout<<"6. Mostrar en PostOrden"<<endl;
		cout<<"7. salir"<<endl;
		cout<<"Opcion: ";cin>>op;
		
		switch(op){
			case 1: cout<<"Digita un numero: ";cin>>num;
			insertar(arbol,num);
			break;
			case 2: mostrarArbol(arbol,0);
			break;
			case 3:
				if(arbol!=NULL){
					cout<<"Dame el numero a buscar: ";cin>>bus;
					encontrado=buscar(arbol,bus);
					if(encontrado){
						cout<<"Elemento encontrado"<<endl;
					}else{
						cout<<"Elemento no encontrado"<<endl;
					}
				}
				break;
			case 4:
				if(arbol==NULL){
					
				}else{
					preOrden(arbol);
					cout<<endl;
				}
				break;
			case 5:cout<<"Recorrido en Inorden"<<endl;
				inOrden(arbol);
				cout<<"\n\n";
				break;
			case 6:
				cout<<"Recorrido en postOrden ";
				postOrden(arbol);
				cout<<"\n\n";
				break;
					
				
		}
		
		system("pause");
		system("cls");
	}while(op!=7||op<1||op>7);
	
}

Nodo *crearNodo(int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->der=NULL;
	nuevoNodo->izq=NULL;
	return nuevoNodo;
}

void insertar(Nodo *&arbol,int n){
	if(arbol==NULL){
		Nodo *nuevoNodo=crearNodo(n);
		arbol=nuevoNodo;
	}else{//si el valor tiene mas de un nodo
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertar(arbol->izq,n);
		}else{
			insertar(arbol->der,n);
		}
	}
}
void mostrarArbol(Nodo *arbol,int cont){
	if(arbol==NULL){
		return;
	}else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}
bool buscar(Nodo *arbol,int n){
	if(arbol==NULL){
		return false;
	}else if(arbol->dato==n){
		return true;
	}else if(n<arbol->dato){
		return buscar(arbol->izq,n);
	}else{
		return buscar(arbol->der,n);
	}
}
void preOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		cout<<arbol->dato<<"-";
		preOrden(arbol->izq);
		preOrden(arbol->der);		
	}
}
void inOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}
void postOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}
