/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no.
 Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/
 
 //nota ejercicoo mal 
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	
	int filas,columnas;
	int valor=0;
	
	do{
		cout<<"Dame las filas: ";cin>>filas;
		cout<<"Dame las columnas: ";cin>>columnas;
		
	}while(filas<1||columnas<1);
	//creamos la matriz
	int numeros[filas][columnas];
	
	//pedimos los datos
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Dame el valor de ["<<i<<"]["<<j<<"]: ";
				cin>>numeros[i][j];
		}
	}
	//mostramos la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<endl;
	}
	//comprobamos si la matriz es cuadrada
	if(filas==columnas){
		cout<<"La matriz es cuadrada"<<endl;
	}else{
		cout<<"La matriz no es cuadrada"<<endl;
	}
	//comprobamos si es igual a su matriz transpuesta
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j]==numeros[j][i]){
					//valor='v';
					valor++;
					
				}
			}
			
		}
	}
	
	if(valor==filas*columnas){
		cout<<"La matriz es simetrica "<<endl;
	}
	system("pause");
	return 0;
}
