/*asignamcion dinamica de arreglos

new : reserva el numero de bytes solicitado por la declaracion
delete : libera un bloque de bytes reservado con anterioridad

ejemplo pedir al usuario n calificaciones y almacenarlo en un 
arreglo*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif,*calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;
	
	system("pause");
	return 0;
}

void pedirNotas(){
	cout<<"Digita el numero de calificaciones: ";
	cin>>numCalif;
	
	calif = new int[numCalif];//creamos el arreglo de tipo dinamico
	
	for(int i=0;i<numCalif;i++){
		cout<<"ingresa una nota: ";
		cin>>calif[i];
	}	
}

void mostrarNotas(){
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
	
}

