//estructura basica c++

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1,//={"marco",18},
persona2;//={"pepe",34};


int main(){
	
	//relenar
	cout<<"Dame tu nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Dame tu edad: ";
	cin>>persona1.edad;
	//estructuras 
	cout<<"Nombre1: "<<persona1.nombre<<" Edad "<<persona1.edad<<endl;
	cout<<"\nNombre2: "<<persona2.nombre<<" Edad "<<persona2.edad<<endl;
	
	
	
	getch();
	return 0;
}




