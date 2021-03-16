#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void escribir();
int main(){
	
	escribir();
	system("pause");
	return 0;
}
void escribir(){
	ofstream archivo;
	archivo.open("posicion.txt",ios::out);
	
	if(archivo.fail()){
		exit(1);
	}
	//funcion actual
	//archivo.tellp();
	cout<<"Pocision actual del archivo: "<<archivo.tellp()<<endl;
	archivo.seekp(5);
	archivo<<"hola";
	
	//posicion en donde empezar a escribir
	
	archivo<<"            lus";
	cout<<"Pocision actual del archivo: "<<archivo.tellp()<<endl;
	archivo.close();
}
