#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
using namespace std;

void Alumno::pedirDatos(){
	cout<<"Ingresa la calificacion de matematicas: ";
	cin>>cMate;
	cout<<"Ingresa la calificacion de programacion: ";
	cin>>cProgramacion;
}

void Alumno::mostrarNotas(){
	promedio=(cMate+cProgramacion)/2;
	cout<<"Nota de matematicas: "<<cMate<<endl;
	cout<<"Nota de programacion: "<<cProgramacion<<endl;
	cout<<"Promedio: "<<promedio<<endl;
}
