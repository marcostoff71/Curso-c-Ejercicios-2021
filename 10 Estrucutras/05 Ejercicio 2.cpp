/*Ejercicio 2: Hacer una estructura llamada alumno, 
en la cual se tendrán los siguientes Campos: 
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, 
comprobar cuál de los 3 tiene el mejor promedio y posteriormente 
imprimir los datos del alumno.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
};
int main(){
	struct alumno alumnos[3];//declaramos la estructura
	int i=0;
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Alumno:"<<i+1<<endl;
		cout<<"Dame el nombre del alumno: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Dame la edad del alumno: ";
		cin>>alumnos[i].edad;
		cout<<"Dame el promedio del alumno: ";
		cin>>alumnos[i].promedio;
	}
	
	
	if(alumnos[0].promedio>alumnos[1].promedio&&alumnos[0].promedio>alumnos[2].promedio){
		i=0;
	}else if(alumnos[1].promedio>alumnos[0].promedio&&alumnos[1].promedio>alumnos[2].promedio){
		i=1;
	}else{
		i=2;
	}
	cout<<"El alumno con mayor promedio fue el: "<<i+1<<endl;
	cout<<"Nombre: "<<alumnos[i].nombre<<endl;
	cout<<"Edad: "<<alumnos[i].edad<<endl;
	cout<<"Promedio "<<alumnos[i].promedio<<endl; 
	
	system("pause");
	return 0;
}
