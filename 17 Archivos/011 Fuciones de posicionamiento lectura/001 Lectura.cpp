//funciones de posicionamiento para lectirua
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>


using namespace std;

void lectura();
int main(){
	
	lectura();
	
	
	system("pause");
	return 0;
}
void lectura(){
	ifstream archivo;
	archivo.open("hola.txt",ios::in);
	if(archivo.fail()){
		exit(1);
	}
	archivo.seekg(5);
	cout<<"posicion: "<<archivo.tellg()<<endl;
	string linea;
	getline(archivo,linea);
	
	cout<<linea<<endl;
	
	
	
}
