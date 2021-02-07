/*Ejercicio 5: Pedir al usuario N n�meros, almacenarlos en un arreglo din�mico
posteriormente ordenar los n�meros en orden ascendente y mostrarlos en pantalla.
NOTA: Utilizar cualquier m�todo de ordenamiento. */

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
//prototipos de funciones
void pedirDatos();
void InsertiorSort(int *Parray,int cantidad);
void mostrar(int *Parray,int cantidad);
//declaramos las varibles a nivel de clase

int *arrayPun,can;
int main(){
	pedirDatos();
	mostrar(arrayPun,can);
	InsertiorSort(arrayPun,can);
	mostrar(arrayPun,can);
	delete[] arrayPun;
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	srand(time(NULL));
	cout<<"Dame la cantidad de elementos: ";cin>>can;
	arrayPun = new int [can];
	
	
	for(int i=0;i<can;i++){
		*(arrayPun+i)=rand()%101;
	}
}
void InsertiorSort(int *Parray,int cantidad){
	
	int postA,dato;
	for(int i=1;i<cantidad;i++){
		dato=*(Parray+i);
		postA=i;
		
		while(postA>0&&*(Parray+postA-1)>dato){
			*(Parray+postA)=*(Parray+postA-1);
			postA--;
		}
		
		*(Parray+postA)=dato;
	}
}
void mostrar(int *Parray,int cantidad){
	for(int i=0;i<cantidad;i++){
		cout<<*(Parray+i)<<" ";
	}
	cout<<endl;
}
