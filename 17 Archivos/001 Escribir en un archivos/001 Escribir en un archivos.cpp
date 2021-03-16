#include<iostream>
#include<stdlib.h>
#include<fstream>


using namespace std;

//prototipos
void crear();

int main(){
	crear();
	
	
	system("pause");
	return 0;
}
void crear(){
	string nombre,frase;
	cout<<"Digita el nombre del archivo: ";
	getline(cin,nombre);
	ofstream archivo;
	
	archivo.open(nombre.c_str(),ios::out);
	if(archivo.fail()){
		cout<<"Ha ocurrido un error al error al crear el archivo"<<endl;
		exit(1);
	}
	
	cout<<"\nDigita el nombre del archivo: ";
	getline(cin,frase);
	archivo<<frase<<endl;
	archivo<<"hola que tal mi nombre es marco"<<endl;
	archivo.close();
}
