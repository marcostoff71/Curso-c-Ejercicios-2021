/*Ejercicio 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos:
 Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 
 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura*/

#include<iostream>
#include<stdlib.h>

using namespace std;


struct alumno{
	char nombre[30];
	int edad;
	int promedio;
}alumnos[3],*PAlumnos=alumnos;

int mayori=0;

void pedirDatos();
void mayorPromedio(alumno*);
void mostrar(alumno*,int );
int main(){
	pedirDatos();
	mayorPromedio(PAlumnos);
	mostrar(PAlumnos,mayori);
	system("pause");
	return 0;
}

void pedirDatos(){
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<i+1<<". Dame tu nombre: ";
		cin.getline((PAlumnos+i)->nombre,30,'\n');
		cout<<i+1<<". Dame tu edad: ";cin>>(PAlumnos+i)->edad;
		cout<<i+1<<". Dame el promedio: ";cin>>(PAlumnos+1)->promedio;
		cout<<endl;
	}
}

void mayorPromedio(alumno *alums){
	int mayor=0;
	for(int i=0;i<3;i++){
		if((alums+i)->promedio>mayor){
			mayor=(alums+i)->promedio;
			mayori=i;
		}
	}
}
void mostrar(alumno* mejorA,int indi){
	cout<<"\nMejor promedio es del alumno"<<endl;
	cout<<"Nombre: "<<(mejorA+indi)->nombre<<endl;
	cout<<"Edad: "<<(mejorA+indi)->edad<<endl;
	cout<<"Promedio: "<<(mejorA+indi)->promedio<<endl;
}
