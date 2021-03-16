//añadir texto al final de un archivo
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>


using namespace std;

void anadir();

int main(){
	
	anadir();
	
	system("pause");
	return 0;
}

void anadir(){
	ofstream archivo;
	string texto;
	archivo.open("pro.txt",ios::app);
	
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo"<<endl;
		exit(1);
	}
	cout<<"Digita el texto: ";
	getline(cin,texto);
	
	archivo<<texto;
	archivo.close();
}
