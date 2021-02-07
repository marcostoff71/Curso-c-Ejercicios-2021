#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo* siguiente;
};
void Agregar(Nodo*&, int );
void Quitar(Nodo*&, int &);

int main() {
	Nodo *pila = NULL;
	int dato;
	char re;
	do {
		cout << "Dame el numero a agregar: "; cin >> dato;
		Agregar(pila, dato);
		cout << "Quieres agregar otro numero (S/N)"; cin >> re;
	} while (re == 's' || re == 'S');


	while (pila!=NULL)
	{
		Quitar(pila, dato);
		if (pila != NULL) {
			cout << dato << " ";
		}
		else {
			cout <<dato<<"." << endl;
		}
	}
	system("pause");
	return 0;
}
void Agregar(Nodo*& pila, int n) {
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = pila;
	pila = nuevoNodo;
}
void Quitar(Nodo*& pila, int& n) {
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}



