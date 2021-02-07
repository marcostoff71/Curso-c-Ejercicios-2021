//Ejercicio 2: Realiza un programa que defina una matriz de 3x3 y 
//escriba un ciclo para que muestre la diagonal principal de la matriz.


#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	
	
	int numeros[3][3]{{2,3,4},{4,3,2},{6,3,1}};
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)){
				cout<<numeros[i][j];
			}
		}
		cout<<endl;
	}
	
	
	system("pause");
	return 0;
}
