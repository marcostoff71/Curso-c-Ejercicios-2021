//Reliza un programa que pida al usuario el nombre o ubicacion de un 
//fichero de texto y a continuacion de lectura a todo el fibrero

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
//namspace 
using namespace std;
//varibles a nivel de global
ifstream archivo;
//prototipos de funciones
void ubicacion();
void lectura();


//funcion principal
int main(){
	ubicacion();
	lectura();
	
	
	system("pause");
	return 0;
}

//funciones
void ubicacion(){
	string ubicacion;
	cout<<"Dame la ubicacion del archivo: ";
	getline(cin,ubicacion);
	
	archivo.open(ubicacion.c_str(),ios::in);
	
	if(archivo.fail()){
		exit(1);
	}
}
void lectura(){
	string texto="";
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
	
}
