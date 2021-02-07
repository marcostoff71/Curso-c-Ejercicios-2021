//colas
#include<iostream>
#include<stdlib.h>
#include <ctype.h>//converit de a minusculas

using namespace std;

//Declaramos el nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
}*inicio=NULL,*fin=NULL;//Declaramos el inicio y el final

//Declaramos los prototipos 
void Agregar(int n);//agreagarElementos
int Eliminar();//Elimima elementos
void MostrarTodo();//Muestra los elemenos
void eliminarTodo();//Elimina todos los elementos 
//creamos un menur para probar las opciones creadas
int menu(){
	int opcion;
	cout<<"1. Ingresar elementos a la cola"<<endl;
	cout<<"2. Quitar un elemento a la cola"<<endl;
	cout<<"3. Mostrar los elementos de la cola"<<endl;
	cout<<"4. Eliminar todos los elementos de la cola"<<endl;
	cout<<"5. Salir"<<endl;
	do{
	cout<<"Escogue una opcion: ";cin>>opcion;
	}while(opcion<1||opcion>5);
	
	return opcion;
}

int main(){
	system("color 0b");
	int opcion,num;
	char conti;
	do{
		opcion=menu();
		cout<<endl;
		if(opcion==1){
			do{
				cout<<"Dame el elemento numero a ingresar: ";cin>>num;
				Agregar(num);
				cout<<"\tNumero: "<<num<<" agregado correctamente"<<endl;
				cout<<"Quieres agregar otro numeor (S/N): ";cin>>conti;
				conti=toupper(conti);
				
			}while(conti=='S');
		}else if(opcion==2){
			if(inicio!=NULL){
				num=Eliminar();
				cout<<"Numero "<<num<<" eliminado"<<endl;
			}else{
				cout<<"Cola vacia"<<endl;
			}
			
		}else if(opcion==3){
			cout<<"\tMostrando elementos"<<endl;
			MostrarTodo();
		}else if(opcion==4){
			cout<<"Elimiando elementos"<<endl;
			eliminarTodo();
		}
		system("pause");
		system("cls");
	}while(opcion!=5);
	system("pause");
	return 0;
}
void Agregar(int n){
	//creamos un nuevo 
	Nodo *nuevoNodo=new Nodo();//creamos el nuevo ndoo
	nuevoNodo->dato=n;//asignamos el nuevo nodo el dato
	nuevoNodo->siguiente=NULL;//apuntamos hacia null
	if(inicio==NULL){//si el incio esta vacio lo agregamos al inicio
		inicio=nuevoNodo;//agregamos el inicio asi el nuevo nodo
	}else{//si el inicio ya tiene un elemento lo agregamos al final
		fin->siguiente=nuevoNodo;//agregamos a siguiente del final el nuevo nodo
	}
	fin=nuevoNodo;//asignamamos fin nuevo nodo
}
int Eliminar(){
	Nodo *aux=inicio;
	int n;
	n=aux->dato;
	if(inicio=fin){
		inicio=NULL;
		fin=NULL;
	}else{
		inicio=inicio->siguiente;
	}
	delete aux;
	return n;
}
void MostrarTodo(){
	Nodo *aux= inicio;
	if(aux!=NULL){
		while(aux!=NULL){
			cout<<aux->dato<<" ";
			aux=aux->siguiente;
		}
		cout<<endl;
	}else{
		cout<<"la cola esta vacia"<<endl;
	}
}
void eliminarTodo(){
	
	if(inicio!=NULL){
		while(inicio!=NULL){
				if(inicio==fin){
				fin=NULL;
				inicio=NULL;
				}else{
				inicio=inicio->siguiente;
				}
		}
	}else{
		cout<<"Cola vacia"<<endl;
	}
}
