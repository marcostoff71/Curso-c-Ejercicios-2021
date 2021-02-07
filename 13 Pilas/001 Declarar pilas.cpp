//pilas
//stacks

#include<iostream>
#include<stdlib.h>

using namespace std;
struct Nodo{
	int dato;
	Nodo * siguiente;
};

void agregar(Nodo*&,int);
void sacar(Nodo*&,int& );
int main(){
	Nodo * pila= NULL;
	int dato;
	
	cout<<"Digita un numero: ";cin>>dato;
	
	agregar(pila,dato);
	
	cout<<"Digita el otro numero: ";cin>>dato;
	agregar(pila,dato);
	
	cout<<"\nSacando los elementos de la pila;"<<endl;
	while(pila!=NULL){//mientras no sea el final de la pila
		sacar(pila,dato);
		if(pila!=NULL){
			cout<<dato<<" ";
		}
		else{
			cout<<dato<<" .";
		}
	}
	
	system("pause");
	return 0;
}

void agregar(Nodo*&pila,int n){
	Nodo *nuevoNodo= new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila = nuevoNodo;
}
void sacar(Nodo*&pila,int &n){
	Nodo *aux =pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}


