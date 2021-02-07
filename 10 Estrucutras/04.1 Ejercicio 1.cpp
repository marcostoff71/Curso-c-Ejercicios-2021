/*Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos:
 Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categoría de competición:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
}cate;


int main(){
	char categoria[20];
	
	cout<<"Ingresa tu nombre: ";
	cin.getline(cate.nombre,20,'\n');
	cout<<"Ingresa tu edad: ";
	cin>>cate.edad;
	fflush(stdin);
	cout<<"Ingresa tu sexo: ";
	cin.getline(cate.sexo,20,'\n');
	cout<<"Ingresa tu club: ";
	cin.getline(cate.club,20,'\n');
	
	
	if(cate.edad<=18){
		strcpy(categoria,"Juvenil");
	}else if(cate.edad<=40){
		strcpy(categoria,"Senior");
	}else if(cate.edad>40){
		strcpy(categoria,"Veterano");
	}
	//mostramos los campos
	cout<<"Categoria: "<<categoria<<endl;
	cout<<"Nombre: "<<cate.nombre<<endl;
	cout<<"Edad: "<<cate.edad<<endl;
	cout<<"Sexo: "<<cate.sexo<<endl;
	cout<<"Club: "<<cate.club<<endl;
	
	system("pause");
	return 0;
	
}
