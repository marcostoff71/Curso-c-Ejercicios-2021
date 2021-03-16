#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
//Listas

struct Nodo{
	int dato;
	Nodo *siguiente;
};

Nodo *lista=NULL;
//prototipos de funciones
void agregar(int num);
void agregarOr(int num);
void eliminarNodo(int no);
int eliminar();
void mostrar();


//funcionn principal
int main(){
	int num;
	for(int i=0;i<10;i++){
		cout<<"Dame un numero: ";
		cin>>num;
		agregarOr(num);
	}
	
	mostrar();
	
	
	system("pause");
	return 0;
}
//funciones
void agregar(int num){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=num;
	nuevoNodo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevoNodo;
		
	}else {
		Nodo *aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevoNodo;
	}
}
void agregarOr(int num){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=num;
	
	Nodo *aux1=lista;
	Nodo *aux2=NULL;
	
	while(aux1!=NULL&&aux1->dato<num){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista=nuevoNodo;
	}else{
		aux2->siguiente=nuevoNodo;
	}
	nuevoNodo->siguiente=aux1;
}
void eliminarNodo(int no){
	if(lista!=NULL){
		Nodo *auxBorrar=lista;
		Nodo *anterior=NULL;
		
		while(auxBorrar!=NULL&&auxBorrar->dato!=no){
			anterior=auxBorrar;
			auxBorrar=auxBorrar->siguiente;
		}
		
		if(auxBorrar==NULL){
			cout<<"Elemento no encontrado"<<endl;
		}else if(anterior==NULL){
			lista=lista->siguiente;
		}else{
			anterior->siguiente=auxBorrar->siguiente;
		}
	}
}
int eliminar(){
	
}
void mostrar(){
	if(lista!=NULL){
		Nodo* aux=lista;
		
		while(aux!=NULL){
			cout<<aux->dato<<" ";
			aux=aux->siguiente;
		}
		cout<<endl;
	}
}
