//Ejercicio 5: Realice un programa que lea una matriz de 3x3 
//y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
//[1,2,3]	[1,4,8]
//[4,3,2]	[2,3,9]
//[8,9,0]	[3,2,0]

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[3][3];
	int copia[3][3];
	 
	 //pedimos los datos
	for(int filas=0;filas<3;filas++){
	 	
	 	for(int columnas=0;columnas<3;columnas++){
	 		
	 		cout<<"Dame ["<<filas<<"] ["<<columnas<<"] : ";
	 		cin>>numeros[filas][columnas];
		}
	}
	 
	 //copiamos los datos 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				copia[i][j]=numeros[j][i];
			
		}
	}
	
	//mostramos la matriz transpuesta
	cout<<"\nMatriz Transpuesta"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<copia[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	system("pause");
	return 0;
}
