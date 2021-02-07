/*Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene
en cola, y por ultimo muestre los clientes en el orden correcto.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct Cliente {
	char nombre[30];
	char id[10];
	int edad;
};
struct Nodo{
	Cliente c;

	Nodo *siguiente;
}*inicio=NULL,*fin=NULL;

void menu();
void pedirDatos(Cliente &c);
void agregar(Cliente c);
void eliminar(Cliente &c);
int main(){
	menu();
	
	system("pause");
	return 0;
}
void menu(){
	Cliente c;
	char salir;
	do{
		cout<<endl;
		pedirDatos(c);
		agregar(c);
		cout<<"Deseas agregar mas datos (S/N):";cin>>salir;
		
	}while(salir=='S'||salir=='s');
	
	while(inicio!=NULL){
		eliminar(c);
		cout<<"Nombre: "<<c.nombre<<endl;
		cout<<"ID: "<<c.id<<endl;
		cout<<"Edad: "<<c.edad<<endl;
		cout<<endl;
		}
}
void pedirDatos(Cliente &c){
	fflush(stdin);
	cout<<"Ingresa tu nombre: ";cin.getline(c.nombre,30,'\n');
	cout<<"Ingresa tu id: ";cin.getline(c.id,10,'\n');
	cout<<"Ingresa tu edad: ";cin>>c.edad;
}
void agregar(Cliente c){
	Nodo *nuevoNodo= new Nodo();
	nuevoNodo->c=c;
	nuevoNodo->siguiente=NULL;
	if(inicio==NULL){
		inicio=nuevoNodo;
	}else{
		fin->siguiente=nuevoNodo;
	}
	
	fin=nuevoNodo;
}
void eliminar(Cliente &c){
	Nodo *aux = inicio;
	c=aux->c;
	if(inicio==fin){
		inicio=NULL;
		fin=NULL;
	}else{
		inicio=inicio->siguiente;
	}
	delete aux;
}
