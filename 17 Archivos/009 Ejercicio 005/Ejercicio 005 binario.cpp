/*Ejercicio 5: Crear un archivo binario donde almacernar un registro
que contenga las pulsaciones de un atleta en una determinada hora,
el programa debe tener un menur con las siguientes opciones

	1. Comenzar a digitar las pulsasaciones 
	2. Añadir mas pulsaciones 
	3. Mostrar pulsaciones registradas
	4. Salir
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;
//prototipos de funciones
void menu();

void anadirPulsaciones();
void anadirMasPulsaciones();
void mostrarPulsa();

//estrucuras
struct RegistroAtleta{
	float hora;
	int pulsaciones;
};
//funcion principal
int main(){
	menu();
	system("pause");
	return 0;
}
//funciones
void menu(){
	int op=0;
	do{
		cout<<"1. Comencar a digitar las pulsaciones"<<endl;
		cout<<"2. Añandir mas pulsaciones"<<endl;
		cout<<"3. Mostrar las pulsaciones registradas"<<endl;
		cout<<"4. Salir"<<endl;
		do{
			cout<<"Escogue una opcion: ";cin>>op;
		}while(op<1||op>4);
		
		switch(op){
			case 1:
				anadirPulsaciones();
				break;
			case 2:
				anadirMasPulsaciones();
				break;
			case 3: 
				mostrarPulsa();
				break;
		}
		
		
		system("pause");
		system("cls");
	}while(op!=4);
}
void anadirPulsaciones(){
	ofstream archivo;
	RegistroAtleta a1;
	archivo.open("atleta.dat",ios::out|ios::binary);
	if(archivo.fail()){
		cout<<"Error al crear el archivo"<<endl;
		exit(1);
	}
	
	cout<<"Ingresa la hora: ";cin>>a1.hora;
	cout<<"Ingrsa las pulsaciones: ";cin>>a1.pulsaciones;
	
	archivo.write((char *)&a1,sizeof(a1));
	
	archivo.close();
}
void anadirMasPulsaciones(){
	ofstream archivo;
	RegistroAtleta a1;
	archivo.open("atleta.dat",ios::app|ios::binary);
	if(archivo.fail()){
		cout<<"Error al crear el archivo"<<endl;
		exit(1);
	}
	
	cout<<"Ingresa la hora: ";cin>>a1.hora;
	cout<<"Ingrsa las pulsaciones: ";cin>>a1.pulsaciones;
	
	archivo.write((char *)&a1,sizeof(a1));
	
	archivo.close();
}
void mostrarPulsa(){
	ifstream archivoB;
	archivoB.open("atleta.dat",ios::in|ios::binary);
	if(archivoB.fail()){
		cout<<"Error al abrir el archivo"<<endl;
		exit(1);
	}
	
	RegistroAtleta a1;
	while(!archivoB.eof()){
		archivoB.read((char*)&a1,sizeof(a1));
		if(!archivoB.eof()){
		cout<<"Hora: "<<a1.hora<<endl;
		cout<<"Pulsaciones: "<<a1.pulsaciones<<endl<<endl;
		}
	}
	archivoB.close();
}

