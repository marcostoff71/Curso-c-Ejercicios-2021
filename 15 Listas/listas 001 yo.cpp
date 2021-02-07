#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
}*lista=NULL;

void Agregar(int n);
void mostrar();
void buscar(int n);
int main(){
	int n;
	for(int i=0;i<5;i++){
		cout<<i+1<<" Dame el numero: ";cin>>n;
		Agregar(n);
	}
	mostrar();
	
	system("pause");
	return 0;
}
void Agregar(int n){
	
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2=NULL;
	
	while(aux1!=NULL&&aux1->dato<n){
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

void mostrar(){
	Nodo *aux=lista;
	if(aux!=NULL){
		while(aux!=NULL){
			cout<<aux->dato<<" ";
			aux=aux->siguiente;
		}
		cout<<endl;
	}
}
void buscar(int n);
