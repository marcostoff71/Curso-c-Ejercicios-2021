//practica nulos

#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	struct Nodo *siguiente;
}*pila=NULL;


void Agregar(int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
}
int eliminar(){
	int n;
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
	
	//n=pila->dato;
	//pila=pila->siguiente;
	return n;
}
void mostrar(){
	Nodo *aux=pila;
	if(aux!=NULL){
	
	while(aux!=NULL){
		cout<<aux->dato<<" ";
		aux=aux->siguiente;
	}
	}else{
		cout<<"No existe ningun elemento"<<endl;
	}
	cout<<endl;
	//for(Nodo *aux = pila;aux!=NULL;aux=aux->siguiente){
	//	cout<<aux->dato<<" ";
	//}
	//cout<<endl;
}
void eliminarTodo(){
	while(pila!=NULL){
		pila=pila->siguiente;
	}
}
int main(){
	Agregar(23);
	Agregar(2);
	Agregar(3);
	Agregar(4);
	Agregar(6);
	
	mostrar();
	//cout<<"Numero eliminado: "<<eliminar()<<endl;
	//cout<<"Numero eliminado: "<<eliminar()<<endl;
	//cout<<"Numero eliminado: "<<eliminar()<<endl;
	cout<<"Numero eliminado: "<<eliminar()<<endl;
	cout<<"Numero eliminado: "<<eliminar()<<endl;
	eliminarTodo();
	
	
	system("pause");
	return 0;
}
