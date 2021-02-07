//Ejercicio 1: Crear una lista que almacene "n" números enteros  y calcular el menor y mayor de ellos. 
#include<iostream>
#include<stdlib.h>

using namespace std;
/*Estrucutras*/
struct Nodo{
	int dato;
	Nodo *siguiente;
}*lista=NULL;

/*Prototipos*/
void agregar(int n);
void mostrar();
void eliminarElemento(int n);
int eliminar();
int menu();
void mayorMenor();


/*main*/
int main(){
	int opcion,num;
	do{
		opcion=menu();
		switch(opcion){
			case 1:
				cout<<"Dame el numero a agregar: ";cin>>num;
				agregar(num);
				break;
			case 2:
				cout<<"Mostrando elementos"<<endl;
				mostrar();
				break;
			case 3:
				cout<<"Dame el elemento a eliminar: ";cin>>num;
				eliminarElemento(num);
				break;
			case 4:
				if(lista==NULL){
					cout<<"lista vacia"<<endl;
				}else{
					cout<<"Eliminando elementos"<<endl;
					while(lista!=NULL){
						lista=lista->siguiente;
					}
				}
				break;
			case 5:
				if(lista==NULL){
					cout<<"Lista vacia"<<endl;
					
				}else{
					mayorMenor();
				}
				break;
		}
		
		system("pause");
		system("cls");
	}while(opcion!=6);
	
	system("pause");
	return 0;
}

/*Funciones o metodos uwu*/
int menu(){
	int op;
	do{
		cout<<"1. Ingresar elementos a la lista"<<endl;
		cout<<"2. Mostrar elementos de la lista"<<endl;
		cout<<"3. Eliminar un elemento de la lista"<<endl;
		cout<<"4. Eliminar toda la lista"<<endl;
		cout<<"5. Mayor y menor elemento"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Escogue una opcion: ";cin>>op;
	}while(op<1||op>6);
	return op;
}
void mayorMenor(){
	int Mayor=0,Menor=9999;
	if(lista==NULL){
		cout<<"Lista vacia"<<endl;
	}else{
		Nodo *aux=lista;
		while(aux!=NULL){
			if(aux->dato>=Mayor){
				Mayor=aux->dato;
			}
			if(aux->dato<=Menor){
				Menor=aux->dato;
			}
			aux=aux->siguiente;
		}
		
		cout<<"Numero menor: "<<Menor<<endl;
		cout<<"Numero mayor: "<<Mayor<<endl;
	}
	
}
void agregar(int n){
	Nodo *nuevoNodo = new Nodo();//creamos un nuevo Nodo
	nuevoNodo->dato=n;//asigamos a nodo el dato
	
	Nodo *aux=NULL;//creamos un auxiliar 
	
	if(lista==NULL){//si lista es igual a null significa que esta vacia 
	//por la tonto podemos ponerle facilmente el nuevo nodo
		lista=nuevoNodo;
		nuevoNodo->siguiente=NULL;
	}else{
		//si no es asi 
		aux=lista;//asignamos a aux lista
		
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevoNodo;
		nuevoNodo->siguiente=NULL;
	}
}
void mostrar(){
	if(lista==NULL){
	cout<<"lista vacia"<<endl;
	}else{
		Nodo *aux =lista;
		while(aux!=NULL){
			cout<<aux->dato<<"->";
			aux=aux->siguiente;
		}
		cout<<endl;
	}
}
void eliminarElemento(int n){
	if(lista==NULL){
		cout<<"lista vacia"<<endl;
	}else{
		Nodo *auxBorrar=lista;
		Nodo *anterior=NULL;
		while(auxBorrar!=NULL&&auxBorrar->dato!=n){
			anterior=auxBorrar;
			auxBorrar=auxBorrar->siguiente;
		}
		
		if(auxBorrar==NULL){
			cout<<"Elemento no encontrado"<<endl;
		}else if(anterior==NULL){
			delete auxBorrar;
			lista=lista->siguiente;
		}else{
			anterior->siguiente=auxBorrar->siguiente;
			delete auxBorrar;
		}
	}
}
int eliminar(){
	int n;
	Nodo *aux=lista;
	n=aux->dato;
	lista=aux->siguiente;
	delete aux;
	return n;
}
