#include<iostream>
#include<stdlib.h>
#include<string.h>
#include <string>
using namespace std;


int main(){
	string nombre;
	cout<<"Dame tu nombre: ";
	getline(cin,nombre);
	cout<<"Tu nombre es: "<<nombre.c_str()<<endl;
	int letras=nombre.length();
	cout<<"Tu nombre tiene "<<letras<<" letras"<<endl;
	
	int lon=strlen(nombre.c_str());
	
	cout<<"La longitud de tu nombre es: "<<lon<<" letras"<<endl;
	string mayus=toupper(nombre[0])+nombre.substr(1);
	
	cout<<"Tu nombre es: "<<mayus<<endl;
	
	
	system("pause");
	return 0;
}
