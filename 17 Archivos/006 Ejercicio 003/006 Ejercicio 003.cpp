//ejercicio 3
//realiza un programa que pida al usuario el nombre o ubicacion 
//de un fichero de texto y, a continuacion añada un texto en el 
//hasta que el usuario lo decida
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>


using namespace std;

ofstream archivo;

void ubicacion();
void anadir();



int main(){
	ubicacion();
	anadir();

	system("pause");
	return 0;
}

void ubicacion(){
	string ubi;
	cout<<"Dame la ubicacion del archivo: ";
	getline(cin,ubi);
	archivo.open(ubi.c_str(),ios::app);
	if(archivo.fail()){
		exit(1);
	}
	
}
void anadir(){
	string texto;
	char conti;
	do{
		fflush(stdin);
		cout<<"Escribe el texto para agregar: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		cout<<"Deseas agregar mas texto (S/N)";
		cin>>conti;
	}while(conti=='s'||conti=='S');
	archivo.close();
}

