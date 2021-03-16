/*
Ejercicio 4
1. Crear (nombre,apellido,telefono)
2. Agregar mas contactos (nombre,apellidos, telefonos)
3. Visualizar contactos
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include <string>
//namespace 
using namespace std;
//structusa
ofstream archivo;

struct contacto {
	string nombre;
	string apellidos;
	string telefono;
}con1;
//prottipos de funciones
void menu();
void agregar();
void agregarMas();
void mostrar();
//funcion principal
int main() {
	menu();

	system("pause");
	return 0;
}
//funciones
void menu() {
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
			agregar();
			break;
		case 2:
			agregarMas();
			break;
		case 3:
			mostrar();
		break;
				
		}
		system("pause");
		system("cls");
	} while (op != 4);
}
void agregar(){
	archivo.open("Agenda.txt", ios::out);
			if (archivo.fail()) {
				exit(1);
			}
			else {
				cout << "Archivo creado correctamente" << endl;
			}
			fflush(stdin);
				cout << "Escribe el nombre: "; getline(cin, con1.nombre);
				
				cout << "Escribe el apellido: "; getline(cin, con1.apellidos);
				
				do {

					cout << "Dame el telefono: "; getline(cin, con1.telefono);
				} while (strlen(con1.telefono.c_str()) < 10 || strlen(con1.telefono.c_str()) > 10);
				archivo<<"\tAgenda telefonica"<<endl;
				archivo << "Nombre: " << con1.nombre <<endl;
				archivo<<"Apellido: " << con1.apellidos<<endl; 
				archivo<<"Telefono: " << con1.telefono <<endl;;
	archivo.close();
			
}
void agregarMas(){
	char conti;
			archivo.open("Agenda.txt", ios::app);
			do {
				fflush(stdin);
				cout << "Escribe el nombre: "; getline(cin, con1.nombre);
				
				cout << "Escribe el apellido: "; getline(cin, con1.apellidos);
				
				do {

					cout << "Dame el telefono: "; getline(cin, con1.telefono);
				} while (strlen(con1.telefono.c_str()) < 10 || strlen(con1.telefono.c_str()) > 10);
				
				archivo << "\nNombre: " << con1.nombre <<endl;
				archivo<<"Apellido: " << con1.apellidos<<endl; 
				archivo<<"Telefono: " << con1.telefono <<endl;
				
				cout << "Deseas Agregar mas texto (S/N): "; cin >> conti;
				

			} while (conti == 'S' || conti == 's');
			archivo.close();
}
void mostrar(){
	ifstream archivo;
	archivo.open("Agenda.txt",ios::out);
	if(archivo.fail()){
		exit(1);
	}
	
	string palabras="";
	
	while(!archivo.eof()){
		getline(archivo,palabras+=palabras);
		cout<<palabras<<endl;
	}
	
	archivo.close();
}
