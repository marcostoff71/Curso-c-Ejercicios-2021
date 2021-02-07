//Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[3][3]{{1,2,3},{4,5,6},{7,8,9}};
	int numeros1[3][3]{{1,2,3},{4,5,6},{7,8,9}};
	int suma=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			suma+=numeros[i][j];
			suma+=numeros1[i][j];
			cout<<numeros[i][j]+numeros1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"La suma total es: "<<suma<<endl;
	getch();
	return 0;
}
