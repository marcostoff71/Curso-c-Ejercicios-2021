/*Matrices dinamicas 
Ejemplo rellenar una matriz de n*n y mostrar su contenido
*/


#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
int **punteroMatriz,filas,colum;
void mostrarMatriz(int **,int ,int);
int main(){
	pedirDatos();
	mostrarMatriz(punteroMatriz,filas,colum);
	
	for(int i=0;i<filas;i++){
		delete[] punteroMatriz[i];
	}
	
	delete[] punteroMatriz;
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame el numero de filas: ";cin>>filas;
	cout<<"Dama el numoer de columnas: ";cin>>colum;
	
	punteroMatriz= new int*[filas];//reservando memoria para las filas
	for(int i=0;i<filas;i++){
		punteroMatriz[i]= new int[colum];//reservando memoria para las columas
	}
	
	cout<<"Digitanto elementos de una matriz"<<endl;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			cout<<"Digital un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punteroMatriz+i)+j);//punteroMatri<[i][j];
		}
	}
	
	

	
}
void mostrarMatriz(int **matriz,int fi,int co){
		cout<<"Imprimiendo matri"<<endl;
		for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<endl;
	}
}
