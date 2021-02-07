/*Ejercicio 10: Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta. 
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int **matriz,**matrizTra,filas,colum;

void pedirDatos();
void mostrar(int **transpu,int fi,int co);
int main(){
	pedirDatos();
	cout<<"\nMatriz original"<<endl;
	mostrar(matriz,filas,colum);
	cout<<"\nMatriz transpuesta"<<endl;
	mostrar(matrizTra,filas,colum);
	
	//liberamos espacio de las columnas
	for(int i=0;i<fi;i++){
		delete[] matriz[i];
		delete[] matrizTra[i];
	}
	
	//liberamos espacio de las filas
	delete[] matriz;
	delete[] matrizTra;
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame el numero de filas: ";
	cin>>filas;
	cout<<"Dame el numero de columnas: ";
	cin>>colum;
	
	//creamos la matriz
	matriz= new int *[filas];//reservamos espacio para las filas
	matrizTra= new int *[filas];
	
	for(int i=0;i<filas;i++){
		matriz[i]= new int [colum];//reservamos espacio para las columans
		matrizTra[i]= new int [colum];
	}
	
	//pedimso los datos
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			cout<<"Dame el valor de ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>*(*(matriz+i)+j);//asignamos la mtriz
		}
	}
	//copiamos la matriz 
	//pero ahora en forma transpuesta
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			*(*(matrizTra+i)+j) = *(*(matriz+j)+i);//asignamos la mtriz
		}
	}
	
	
}
void mostrar(int **transpu,int fi,int co){
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			cout<<*(*(transpu+i)+j)<<" ";
		}
		cout<<endl;
	}
}
