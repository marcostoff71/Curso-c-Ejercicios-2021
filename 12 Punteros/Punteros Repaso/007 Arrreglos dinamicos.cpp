#include<iostream>
#include<stdlib.h>
/*
	Asignacion dinamica de arreglos
	new : reseerva el numero de bytes solicitados por la declaracion
	delete: lebera el bloque reverbado de bytes
	
	pedir al usuario n calificacion y almacenarlo en un arreglo dinamico
*/

using namespace std;

int numCali,*alum;
void pedirNotas();


int main(){
	pedirNotas();
	delete[] alum;//liberacion espacios en bytes
	
	
	
	system("pause");
	return 0;
}

void pedirNotas(){
	cout<<"Dame el numero de calificaciones: ";
	cin>>numCali;
	
	alum= new int[numCali];
	
	for(int i=0;i<numCali;i++){
		cout<<i<<". Dame la calificacion: ";
		cin>>alum[i];
	}
	
	for(int i=0;i<numCali;i++){
		cout<<alum[i]<<endl;
	}
}
