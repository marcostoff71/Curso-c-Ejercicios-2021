//paso de para,etros de tipos estructura
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona p1);

int main(){
	pedirDatos();
	mostrarDatos(p1);
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Digital tu nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"Digita tu edad: ";
	cin>>p1.edad;
	
}

void mostrarDatos(Persona p1){
	cout<<"Nombre: "<<p1.nombre<<endl;
	cout<<"Edad: "<<p1.edad<<endl;
}
