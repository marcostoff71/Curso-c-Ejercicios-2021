#include<iostream>
#include<stdlib.h>

using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};


//
int menu();
void insertarLista(Nodo*&,int);
void mostrarLista(Nodo*);
void Buscar(Nodo*,int);
void eliminar(Nodo*,int &n);
int main(){
	
	system("color 0b");
	Nodo *lista=NULL;
	int op,n;
	do{
		op=menu();
		switch(op){
			case 1:
				cout<<"Dame el numero a insertar: ";cin>>n;
				insertarLista(lista,n);
				break;
			case 2:
				cout<<"Mostrando los elementos de la lista"<<endl;
				mostrarLista(lista);
				break;
			case 3: 
				cout<<"Dame el numero a buscar: ";cin>>n;
				Buscar(lista,n);
				break;
				
		}
		system("pause");
		system("cls");
	}while(op!=4);
	
	
	system("pause");
	return 0;
}
int menu(){
	int op=0;
	cout<<"1. Agregar elementos a la lista"<<endl;
	cout<<"2. Mostrar elementos de la lista"<<endl;
	cout<<"3. Buscar un elemento en la lista"<<endl;
	cout<<"4. Salir"<<endl;
	do{
	cout<<"Escogue una opcion: ";cin>>op;
	}while(op<1||op>3);
	
}
void insertarLista(Nodo*& lista ,int n){
	Nodo *nuevoNodo = new Nodo();//creamos un nuevo nodo
	nuevoNodo->dato=n;//asignamos el dato al nuevo nodo
	
	Nodo *aux1 = lista;//asignamos el aux1 a la lista
	Nodo *aux2=NULL;//asignamos el aux2 a la lista
	
	while(aux1!=NULL&&aux1->dato<n){//si ya existe un elemnto en la lista lo recorremos 
		aux2 = aux1;//asignamos aux 2 
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista=nuevoNodo;//si no hya elementos a la lista se le pone el nodo aux1
	}else{
		aux2->siguiente=nuevoNodo;//si existen elemnetos se 
	}
	
	nuevoNodo->siguiente=aux1;
}

void mostrarLista(Nodo*lista){
	Nodo *aux = lista;
	
	if(aux!=NULL){
		while(aux!=NULL){
			cout<<aux->dato<<"-> ";
			aux=aux->siguiente;
		}
	}else{
		cout<<"No existe ningun elemento";
	}
	cout<<endl;
	
	
	delete aux;
}
void Buscar(Nodo* lista,int n){
	Nodo *aux =lista;
	bool encontrado=false;
	if(lista!=NULL){
		while(lista!=NULL&&encontrado==false){
		if(aux->dato==n){
			encontrado =true;
		}
		aux=aux->siguiente;
		}
		if(encontrado){
		cout<<"Numero: "<<n<<" encontrado"<<endl;
		}else{
		cout<<"Numero: "<<n<<" no encontrado"<<endl;
		}
	}else{
		cout<<"Lista vacia"<<endl;
	}
}
	
