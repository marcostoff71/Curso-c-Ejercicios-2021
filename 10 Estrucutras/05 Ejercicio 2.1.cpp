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
	int caliMax=0,pos;
	for(int i=0;i<3;i++){
		//guaramos los datos para 3 alumnos
		fflush(stdin);
		cout<<"Alumno:"<<i+1<<endl;
		cout<<"Dame el nombre del alumno: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Dame la edad del alumno: ";
		cin>>alumnos[i].edad;
		cout<<"Dame el promedio del alumno: ";
		cin>>alumnos[i].promedio;
		
		//comprobamos cual de los 3 alumnos tiene el mejor promedio
		if(alumnos[i].promedio>caliMax){
			caliMax=alumnos[i].promedio;
			pos=i;
		}
	}
	
	
	
	cout<<"El alumno con mayor promedio fue el: "<<pos+1<<endl;
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio "<<alumnos[pos].promedio<<endl; 
	
	system("pause");
	return 0;
}
