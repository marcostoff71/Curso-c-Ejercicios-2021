//Ejercicio 2: Crear una lista que almacene "n" números reales  y calcular su suma y promedio.

#include<iostream>
#include<stdlib.h>

using namespace std;
//Estructuras
struct Nodo{
	float dato;
	Nodo *siguiente;
}*lista=NULL;

//prototipos 
void agregar(float n);
void mostrar();
void eliminarElemento(float n);
float eliminar();
void sumaPromedio();
int menu();

//fucion principal
int main(){
	int op;
	float n;
	do{
		op=menu();
		switch(op){
			case 1:
				cout<<"Dame el numero a agregar: ";cin>>n;
				agregar(n);
				break;
			case 2:
				if(lista!=NULL){
					cout<<"Mostrando lista"<<endl;
					mostrar();
				}
				break;
			case 3:
				if(lista==NULL){
					cout<<"lista vacia"<<endl;
				}else{
					cout<<"Dame el numero a eliminar: ";cin>>n;
					eliminarElemento(n);
				}
				break;
			case 4:
				if(lista==NULL){
					cout<<"lista vacia"<<endl;
				}else{
					cout<<"Eliminando elementos de la lista"<<endl;
					while(lista!=NULL){
						n=eliminar();
					}
				}
				break;
			case 5:
				sumaPromedio();
				break;
		}
		system("pause");
		system("cls");
	}while(op!=6);
	
	system("pause");
	return 0;
}
int menu(){
	int op;
	do{
		cout<<"1. Ingresar elementos a la lista"<<endl;
		cout<<"2. Mostrar elementos de la lista"<<endl;
		cout<<"3. Eliminar un elemento de la lista"<<endl;
		cout<<"4. Eliminar toda la lista"<<endl;
		cout<<"5. Mayor y menor elemento"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Escogue una opcion: ";cin>>op;
	}while(op<1||op>6);
	return op;
}
void agregar(float n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	
	Nodo *aux=NULL;
	if(lista==NULL){
		lista=nuevoNodo;
		nuevoNodo->siguiente=NULL;
	}else{
		aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevoNodo;
		nuevoNodo->siguiente=NULL;
	}
}
void mostrar(){
	Nodo *aux = lista;
	while(aux!=NULL){
		cout<<aux->dato<<"->";
		aux=aux->siguiente;
	}
	cout<<endl;
}
void eliminarElemento(float n){
	if(lista==NULL){
		cout<<"Lista vacia"<<endl;
	}else{
		Nodo *auxBorrar=lista;
		Nodo *anterior=NULL;
		
		while(auxBorrar!=NULL&&auxBorrar->dato!=n){
			anterior=lista;
			auxBorrar=auxBorrar->siguiente;
		}
		if(auxBorrar==NULL){
			cout<<"Elemento no encontrado"<<endl;
		}else if(anterior==NULL){
			lista=lista->siguiente;
			delete auxBorrar;
		}else{
			anterior->siguiente=auxBorrar->siguiente;
			delete auxBorrar;
		}
	}
}
void sumaPromedio(){
	float suma=0,pro=0;
	int cont=0;
	if(lista==NULL){
		cout<<"lista vacia"<<endl;
	}else{
		Nodo *aux=lista;
		while(aux!=NULL){
			suma+=aux->dato;
			cont++;
			aux=aux->siguiente;
		}
		pro=suma/cont;
		cout<<"La suma es: "<<suma<<endl;
		cout<<"El promedio es: "<<pro<<endl;
	}
}
float eliminar(){
	float n;
	Nodo *aux = lista;
	n=aux->dato;
	lista=aux->siguiente;
	delete aux;
}
