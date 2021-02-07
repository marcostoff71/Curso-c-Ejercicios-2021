/*Ejercicio 1: Hacer un programa para agregar números enteros a una pila, hasta que el
usuario lo decida, después mostrar todos los números introducidos en la pila.*/
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void pedirDatos();
void Agregar(Nodo*&,int);
void Quitar(Nodo*&,int&);

int main(){
	system("color 0b");
	pedirDatos();
	
	system("pause");
	return 0;
}
void pedirDatos(){
	Nodo *pila= NULL;
	int dato,reti=0;
	char res;
	
	//pedimos los datos
	do{
		cout<<"Dame el numero: ";cin>>dato;
		Agregar(pila,dato);
		cout<<"\nDeseas agregar otro numero(s/n): ";cin>>res;
		
		system("cls");
	}while(res=='S'||res=='s');
	
	cout<<"Quitanto los elementos"<<endl;
	while(pila!=NULL){
		Quitar(pila,reti);
		cout<<reti<<endl;
		
	}
	
	
	
	
}
void Agregar(Nodo*& pila,int n){
	Nodo*nuevoNodo= new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
	cout<<"\tEl numero: "<<n<<" se a agregado correctamente"<<endl;
}
void Quitar(Nodo*& pila,int& re){
	Nodo *aux =pila;
	re=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

