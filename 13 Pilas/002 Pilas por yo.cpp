//pilas stacks 

#include<iostream>
#include<stdlib.h>

using namespace std;
//creamos el nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
};

void Agregar(Nodo*& ,int );
void Quitar(Nodo*& ,int &);
int main(){
	Nodo *pila=NULL;//declaramos el nodo en null
	int dato;
	for(int i=0;i<2;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>dato;
		Agregar(pila,dato);
	}
	
	//sacando elemento
	while(pila!=NULL){
		Quitar(pila,dato);
		if(pila!=NULL){
			
			cout<<dato<<" ";
		}else{
			cout<<". \n";
		}
	}
	system("pause");
	return 0;
}
void Agregar(Nodo*& pila,int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
}
void Quitar(Nodo*& pila,int &n){
	Nodo *aux = pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
	
}
