/*Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendr�n los siguientes campos:
 Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categor�a de competici�n:
- Juvenil menor o = 18 a�os
- Se�or menor o = 40 a�os
- Veterano mayor a 40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[15];
	char club[20];
}juvenil,senior,veterano;


int main(){
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
	
	cout<<"Ingresa tu nombre: ";
	cin.getline(nombre,20,'\n');
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	cout<<"Ingresa tu sexo: ";
	cin.getline(sexo,20,'\n');
	cin.ignore();
	cout<<"Ingresa tu club: ";
	cin.getline(club,20,'\n');
	cin.ignore();
	
	if(edad<=18){
		cout<<"Perteneces al grupo juvenul"<<endl;
		strcpy(juvenil.nombre,nombre);
		juvenil.edad=edad;
		strcpy(juvenil.sexo,sexo);
		strcpy(juvenil.club,club);
	}else if(edad<=40){
		cout<<"Perteneces al grupo se�ior"<<endl;
		strcpy(senior.nombre,nombre);
		senior.edad=edad;
		strcpy(senior.sexo,sexo);
		strcpy(senior.club,club);
		
	}else if(edad>40){
		cout<<"Perteneces al grupo de veteranos"<<endl;
		strcpy(veterano.nombre,nombre);
		veterano.edad=edad;
		strcpy(veterano.sexo,sexo);
		strcpy(veterano.club,club);
	}
	
}


