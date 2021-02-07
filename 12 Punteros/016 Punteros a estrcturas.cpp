//punteros a estructuras
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona1,*PPersona=&persona1;

void pedirDatos();
void mostrar(Persona *);
int main(){
	pedirDatos();
	mostrar(PPersona);
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame tu nombre: ";
	//cin.getline(persona1.nombre,30,'\n');
	cin.getline(PPersona->nombre,30,'\n');
	//cin.getline(PPersona->nombre,30,'\n');
	
	cout<<"Dame tu edad: ";
	cin>>PPersona->edad;
}
void mostrar(Persona *p1){
	cout<<"Nombre: "<<p1->nombre<<endl;
	cout<<"Edad: "<<p1->edad<<endl;
}
