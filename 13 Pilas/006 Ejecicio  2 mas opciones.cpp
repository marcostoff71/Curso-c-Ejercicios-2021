/*Ejercicio 2: Hacer un programa en C++, utilizando Pilas que contenga el siguiente 
menu: 

	1. Insertar un caracter a la pila
	2. Mostrar todos los elementos de la pila
	3. Salir
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

//creamos el nodo
struct Nodo{
	char dato;
	Nodo *siguiente;
};
//prototipod de funciones
void Agregar(Nodo*&,char );
void Quitar(Nodo*&,char &);
void eliminar(Nodo*&pila);
void mostrar(Nodo*&);

void menu();
int main(){
	Nodo *pila= NULL;
	
	int opcion;
	char ca;
	
	do{
		menu();
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Dame el caracter a agregar: ";cin>>ca;
				Agregar(pila,ca);
				
				break;
			case 2:
				if(pila!=NULL){
					Quitar(pila,ca);
					cout<<ca<<" "<<endl;
				}else{
					cout<<"La pila esta vacia"<<endl;
				}
				
				system("pause");
				break;
			case 3:
				mostrar(pila);
				system("pause");
				break;
			case 4:
				eliminar(pila);
				system("pause");
				break;
		}
		
		system("cls");
	}while(opcion!=5||opcion>5||opcion<1);
	
	system("pause");
	return 0;
}

void menu(){
	cout<<"1. Insertar un caracter a la pila"<<endl;
	cout<<"2. Sacar elemento"<<endl;
	cout<<"3. Mostrar los caracteres del stack"<<endl;
	cout<<"4. Eliminar todo"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Escogue una opcion: ";
}
void Agregar(Nodo*& pila,char c){
	Nodo *nuevoNodo= new Nodo();
	nuevoNodo->dato=c;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
}
void Quitar(Nodo*& pila,char &c){
	Nodo *aux=pila;
	c=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
void mostrar(Nodo*&pila){
	Nodo *aux=pila;
	while(aux!=NULL){
		cout<<aux->dato<<" ";
		aux=aux->siguiente;
	}
	cout<<endl;
}

void eliminar(Nodo*&pila){
	Nodo *aux;
	if(pila==NULL){
		cout<<"No se puede eliminar no contiene ningun elemento"<<endl;
	}
	while(pila!=NULL){
		aux=pila;
		pila=aux->siguiente;
		delete aux;
	}
	
}
