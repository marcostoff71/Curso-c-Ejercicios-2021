#include<iostream>
#include<stdlib.h>

using namespace std;

//declaramos el nodo
struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos 
void agregar(Nodo*&,int); 
void quitar(Nodo*&,int &);
int main(){
	Nodo* pila=NULL;
	int dato,valorRetirado=0;
	for(int i=0;i<5;i++){
		cout<<"Dame un numero: ";cin>>dato;
		agregar(pila,dato);
	}
	
	cout<<"\n\tRetirando"<<endl;
	while(pila!=NULL){
		quitar(pila,valorRetirado);
				
		cout<<valorRetirado<<" ";

	}
	cout<<endl;
	system("pause");
	return 0;
}
void agregar(Nodo*& pila,int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
	cout<<"El elemento "<<n<<" se ha agregado correctamente"<<endl;
}

void quitar(Nodo*& pila,int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

