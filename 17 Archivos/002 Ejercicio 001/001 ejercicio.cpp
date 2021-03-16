#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;

void pedirNombre();
void agregarLineas();
ofstream archi;
int main(){
	pedirNombre();
	agregarLineas();
	
	system("pause");
	return 0;
}

void pedirNombre(){
	string nombre;
	cout<<"Dame el nombre del archivo: ";
	getline(cin,nombre);
	archi.open(nombre.c_str(),ios::out);
	
	if(archi.fail()){
		exit(1);
	}
}
void agregarLineas(){
	string contenido="";
	char salir;
	do{
		fflush(stdin);
		cout<<"Escribe una frase: ";
		getline(cin,contenido);
		archi<<contenido<<endl;
		cout<<"Deseas salir (S/N): ";cin>>salir;
		
	}while(salir!='S'&&salir!='s');
}
