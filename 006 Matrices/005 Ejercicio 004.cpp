//Ejercicio 4:  Hacer una matriz preguntando al usuario el 
//numero de filas y columnas,llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.



#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	int numAle,filas,columnas;
	
	//pedimos las filas y columas 
	cout<<"Dame las filas de la matriz: ";
	cin>>filas;
	cout<<"Dame las columnas de la matriz: ";
	cin>>columnas;
	
	//asignamos las filas y columas a la matriz
	int numeros[filas][columnas];
	int copia[filas][columnas];
	
	//generamos un numeros aleatorio 
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numAle=1+rand()%(101-1);
			numeros[i][j]=numAle;
		}
	}
	
	//copiamos los datos a una nueva matriz
	for(int i=0;i<filas;i++){
		
		for(int j=0;j<columnas;j++){
			copia[i][j]=numeros[i][j];
		}
	}
	//mostramos la matriz nueva
	for(int i=0;i<filas;i++){
		cout<<"[ |";
		for(int j=0;j<columnas;j++){
			cout<<copia[i][j]<<"|";
		}
		cout<<" ]"<<endl;
		
	}
	
	system("pause");
	return 0;
}
