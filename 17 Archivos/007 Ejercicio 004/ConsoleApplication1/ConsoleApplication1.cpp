#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include <string>
//namespace 
using namespace std;
//structusa

struct contacto {
	string nombre;
	string apellidos;
	string telefono;
};
//prottipos de funciones
void menu();
//funcion principal
int main() {
	menu();

	system("pause");
	return 0;
}
//funciones
void menu() {
	contacto con1;
	ofstream archivo;
	int op;
	do {
		cout << "\tMENU" << endl;
		cout << "1. Crear(nombre,apellidos,telefono)" << endl;
		cout << "2. Agregar mas contactos(nombre,apellidos,telefonos)" << endl;
		cout << "3. Visualuzar contactos" << endl;
		cout << "4. Salir" << endl;
		cout << "Esogue una opcion: "; cin >> op;

		switch (op)
		{
		case 1:
			archivo.open("Agenda.txt", ios::out);
			if (archivo.fail()) {
				exit(1);
			}
			else {
				cout << "Archivo creado correctamente" << endl;
			}

			break;
		case 2:
			char conti;
			archivo.open("Agenda.txt", ios::app);
			do {
				
				string nombre;
				string apellido;
				string telefono;
				
				cout << "Escribe el nombre: "; getline(cin, nombre);
				fflush(stdin);
				cout << "Escribe el apellido: "; getline(cin, apellido);
				do {

					cout << "Dame el telefono: "; getline(cin, telefono);
				} while (strlen(telefono.c_str()) < 10 || strlen(telefono.c_str()) > 10);
				archivo << "Nombre: " << nombre << " Apellido: " << apellido << " Telefono: " << telefono << endl;
				cout << "Deseas Agregar mas texto (S/N): "; cin >> conti;

			} while (conti == 'S' || conti == 's');

			break;
		}
		system("pause");
		system("cls");
	} while (op != 4);
}
