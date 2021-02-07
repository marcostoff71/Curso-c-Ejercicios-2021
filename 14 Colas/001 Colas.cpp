//colas

#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos
void Agregar(Nodo*& frente,Nodo*&fin,int n);
void Eliminar(Nodo*& frente,Nodo*&fin,int &n);
bool vacio(Nodo*);

int main(){
	system("color 0b");
	Nodo *frente =NULL;
	Nodo *fin= NULL;
	
	int dato;
	for(int i=0;i<10;i++){
		cout<<"Digita un numero: ";cin>>dato;
	Agregar(frente,fin,dato);
	}
	
	
	cout<<"-------------------------"<<endl;
	while(frente!=NULL&&fin!=NULL){
		Eliminar(frente,fin,dato);
		cout<<"El dato retirado es: "<<dato<<endl;
		cout<<frente<<" "<<fin<<endl;
	}
	
	system("pause");
	return 0;
}

void Agregar(Nodo*& frente,Nodo*&fin,int n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=NULL;
	
	if(frente==NULL){
		frente=nuevoNodo;
	}else{
		fin->siguiente=nuevoNodo;
	}
	
	cout<<frente<<" "<<fin<<" "<<nuevoNodo<<endl;
	fin = nuevoNodo;
	cout<<"Elemento: "<<n<<" agregado correctamente"<<endl;
}
void Eliminar(Nodo*& frente,Nodo*&fin,int &n){
	Nodo *aux=frente;
	n=aux->dato;
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}else{
		frente= frente->siguiente;
	}
	delete aux;
}
bool vacio(Nodo* frente){
	return (frente==NULL)?true:false;
}
