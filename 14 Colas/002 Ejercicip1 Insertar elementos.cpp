/*Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente 
menu: 

	1. Insertar un caracter a una cola
	2. Mostrar todos los elementos de la cola
	3. Salir
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void menu();
void insertar(Nodo*&,Nodo*&,int);
void eliminar(Nodo*&,Nodo*&,int&);

int main(){
	menu();
	
	system("pause");
	return 0;
}
void menu(){
	Nodo *inicio=NULL;
	Nodo *fin=NULL;
	int opcion=0,dato=0,reci=0;
	
	do{
		cout<<"------------Menu--------"<<endl;
		cout<<"1. Insertar un elemento en la fila"<<endl;
		cout<<"2. Sacar todos los elementos de la fila"<<endl;
		cout<<"3. Salir"<<endl;
		do{
		
		cout<<"Escogue una opcion: ";cin>>opcion;
		}while(opcion<1||opcion>3);
		
		switch(opcion){
			case 1:
			cout<<"Dame el elemento a insertar: ";cin>>dato;
			insertar(fin,inicio,dato);
			break;
			case 2:
				
				//if(inicio!=NULL){
				cout<<endl;
				while(inicio!=NULL){
					eliminar(fin,inicio,dato);
					cout<<"El dato retirado es: "<<dato<<endl;
				}
				//}
				//}else{
				//	cout<<"Cola vacia"<<endl;
				//}
			break;
				
		}
		cout<<endl;
	}while(opcion!=3);
	
	
}
void insertar(Nodo*& fin ,Nodo*& inicio,int dato){
	Nodo *nuevoNodo= new Nodo();
	nuevoNodo->dato=dato;
	nuevoNodo->siguiente=NULL;
	
	
	if(inicio==NULL){
		inicio=nuevoNodo;
		
	}else{
		fin->siguiente=nuevoNodo;
	}
	
	fin=nuevoNodo;
	
}
void eliminar(Nodo*& fin ,Nodo*& inicio,int& dato){
	//dato=inicio->dato;
	Nodo *aux=inicio;
	dato=aux->dato;
	if(inicio==fin){
		inicio=NULL;
		fin=NULL;
	}else{
		inicio=inicio->siguiente;
	}
	delete aux;
}
