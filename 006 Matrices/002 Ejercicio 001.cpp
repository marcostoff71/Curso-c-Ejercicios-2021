//Ejercicio 1: Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
// y columnas, Posteriormente mostrar la matriz en pantalla.
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	
	int filas,columnas;
	
	
	cout<<"Dame el numero de filas de la matriz: ";cin>>filas;
	cout<<"Dame el numero de columnas de la matriz: ";cin>>columnas;
	
	int numeros[filas][columnas];
	
	//pedimos los datos de la matriz
	for(int i=0;i<filas;i++){
		cout<<"\tFila "<<i+1<<endl;
		for(int j=0;j<columnas;j++){
			cout<<"Dame el elemento de la columa "<<j+1<<" : ";
			cin>>numeros[i][j]; 
		}
	}
	
	
	//mostramos los elementos de la matriz
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
