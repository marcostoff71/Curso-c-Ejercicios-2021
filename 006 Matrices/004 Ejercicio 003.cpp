//Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.

#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	
	int numeros[2][2];
	int numerosCopia[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"Dame el elemento ["<<i<<"]"<<"["<<j<<"] :";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			numerosCopia[i][j]=numeros[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<numerosCopia[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
