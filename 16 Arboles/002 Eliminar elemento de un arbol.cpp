//arboles
#include<iostream>
#include<stdlib.h>

using namespace std;
//estrcuturas
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
}*arbol=NULL;

//prototipos 
void menu();
Nodo *crearNodo(int n,Nodo *padre);
void insertar(Nodo *&arbol,int n,Nodo *padre);
void mostrarArbol(Nodo *arbol,int contador);
bool buscar(Nodo *arbol,int n);
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);
void postOrden(Nodo *arbol);
void eliminar(Nodo *arbol,int n);
void eliminarNodo(Nodo*&arbol);
Nodo *minimo(Nodo *arbol);
void remplazar(Nodo *,Nodo*);
void destruir(Nodo*);

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
		cout<<"7. Eliminar un nodo"<<endl;
		cout<<"8. salir"<<endl;
		cout<<"Opcion: ";cin>>op;
		
		switch(op){
			case 1: cout<<"Digita un numero: ";cin>>num;
			insertar(arbol,num,NULL);
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
			case 7:
				cout<<"Dame el nodo a eliminar: ";
				cin>>num;
				eliminar(arbol,num);		
				break;
				
		}
		
		system("pause");
		system("cls");
	}while(op!=8||op<1||op>8);
	
}

Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->der=NULL;
	nuevoNodo->izq=NULL;
	nuevoNodo->padre=padre;
	return nuevoNodo;
}

void insertar(Nodo *&arbol,int n,Nodo *padre){
	if(arbol==NULL){
		Nodo *nuevoNodo=crearNodo(n,padre);
		arbol=nuevoNodo;
	}else{//si el valor tiene mas de un nodo
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertar(arbol->izq,n,arbol);
		}else{
			insertar(arbol->der,n,arbol);
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
//eliminar un nodo del arbol
void eliminar(Nodo *arbol,int n){
	if(arbol==NULL){
		return;
	}else if(n<arbol->dato){
		eliminar(arbol->izq,n);
	}else if(n>arbol->dato){
		eliminar(arbol->der,n);
	}else{//si ya encontraste el valor
		eliminarNodo(arbol);
	}
}
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){
		return NULL;
	}
	if(arbol->izq){
		return minimo(arbol->izq);
	}else{
		return arbol;
	}
}
//funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo*&arbol){
	//borrar nodo con dos hijos
	if(arbol->izq&&arbol->der){
		Nodo * menor = minimo(arbol->der);
		arbol->dato=menor->dato;
		eliminarNodo(menor);
	}else if(arbol->izq){
		remplazar(arbol,arbol->izq);
		destruir(arbol);
	}else if(arbol->der){
		remplazar(arbol,arbol->der);
		destruir(arbol);
	}else{//si un nodo no tiene hijos
		remplazar(arbol,NULL);
		destruir(arbol);
		
	}
}

//funcion para remplazar dos nodos
void remplazar(Nodo *arbol,Nodo*nuevoNodo){
	if(arbol->padre){
		//arbol padre hay que asignarle su hijo
		if(arbol->dato==arbol->padre->izq->dato){
			arbol->padre->izq=nuevoNodo;
		}else if(arbol->dato==arbol->padre->der->dato){
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre=arbol->padre;
	}
}
//destruir un nodo
void destruir(Nodo* nodo){
	nodo->der=NULL;
	nodo->izq=NULL;
	delete nodo;
}
