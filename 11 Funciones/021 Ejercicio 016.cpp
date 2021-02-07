/*Ejercicio 16: Realice una función que dada una matriz y un número de 
fila de la matriz devuelva el menor de los elementos almacenados en dicha 
fila.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void menorNumero(int matriz[][100],int fi,int co);
void mostrarMatriz(int matriz[][100],int fi,int co);

int filas,columnas;
int matriz[100][100];


int main(){
	pedirDatos();
	mostrarMatriz(matriz,filas,columnas);
	menorNumero(matriz,filas,columnas);
	
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame el numero de filas: ";
	cin>>filas;
	cout<<"Dame el numero de columas: ";
	cin>>columnas;
	
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<i+1<<"."<<j+1<<".- Dame el valor: ";
			cin>>matriz[i][j];
		}
	}
	
}
void mostrarMatriz(int matriz[][100],int fi,int co){
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

void menorNumero(int matriz[][100],int fi,int co){
	int numMenorFilas[fi];
	int k=0;
	int menor=1000;
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			if(matriz[j][i]<menor){
				menor=matriz[j][i];
			}
		}
		numMenorFilas[k]=menor;
		k++;
		menor=1000;
	}
	
	
	for(int i=0;i<fi;i++){
		cout<<"Menor numero de la fila "<<i+1<<": "<<numMenorFilas[i]<<endl;;
	}
	
	
	
}
