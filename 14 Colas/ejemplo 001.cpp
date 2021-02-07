#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
}*inicio=NULL,*fin=NULL;

void agregar(int n){
	Nodo *aux = new Nodo();
	aux->dato=n;
	aux->siguiente=NULL;
	
	if(inicio==NULL){
		inicio=aux;
	}else{
		fin->siguiente=aux;
	}
	fin=aux;
	
}
void eliminar(int &n){
	Nodo *aux= inicio;
	n=aux->dato;
	
	if(inicio==fin){
		inicio=NULL;
		fin=NULL;
	}else{
		inicio=inicio->siguiente;
	}
	
	delete aux;
}
int main(){
	
	int dato;
	for(int i=0;i<3;i++){
		cout<<i+1<<". Dame el valor: ";cin>>dato;
		agregar(dato);
	}
	
	while(inicio!=NULL){
		eliminar(dato);
		cout<<"Dato eliminado: "<<dato<<endl;
	}
	system("pause");
	return 0;
}
