//Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int cantidad,mayor=0;
	
	cout<<"Dame la cantidad de elementos: ";cin>>cantidad;
	
	int numeros[cantidad];
	for(int i=0;i<cantidad;i++){
		cout<<"Dame el numero "<<i+1<<" : ";
		cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	cout<<"El mayor elementos es : "<<mayor<<endl;
	
	system("pause");
	return 0;
}
