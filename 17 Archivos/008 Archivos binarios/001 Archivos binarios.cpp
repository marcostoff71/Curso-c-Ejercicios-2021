//archvios binarios

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void escribir();
void leer();

struct Registro{
	char nombre[20];
	char apellido[20];
};

int main(){
	escribir();
	leer();

	system("pause");
	return 0;	
}
void escribir(){
	ofstream archivo;
	archivo.open("prueba.dat",ios::out | ios::binary);
	if(archivo.fail()){
		cout<<"No se pude abrir el archivo"<<endl;
		exit(1);
	}
	Registro persona;
	
	cout<<"pidiendo datos"<<endl;
	cout<<"Digite un nombre: ";
	cin.getline(persona.nombre,20,'\n');
	cout<<"Diguta un apellido: ";
	cin.getline(persona.apellido,20,'\n');
	
	
	archivo.write((char *)&persona,sizeof(Registro));//escribimos los datos en el archivo 
	archivo.close();
	
}
void leer(){
	ifstream archivob;
	archivob.open("prueba.dat",ios::in|ios::binary);
	
	if(archivob.fail()){
		cout<<"No se encuentra el archiv"<<endl;
		exit(1);
	}
	
	Registro persona;
	archivob.read((char *)&persona,sizeof(Registro));
	
	cout<<"Mostrando los datos leidos"<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Apellido: "<<persona.apellido<<endl;
	
	archivob.close();
}
