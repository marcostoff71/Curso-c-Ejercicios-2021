//Ejercicio 3: Rellenar un array de 10 n�meros, posteriormente utilizando
//punteros indicar cuales son n�meros pares y su posici�n en memoria.
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[10];
	int *dirNumeros;
	for(int i=0;i<10;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>numeros[i];
	}
	
	dirNumeros=numeros;
	for(int i=0;i<10;i++){
		if(*dirNumeros%2==0){
			cout<<"El numero: "<<*dirNumeros<<" es par"<<endl;
			cout<<"Direccion de memoria: "<<dirNumeros<<endl;
		}
		dirNumeros++;
	}
	
	system("pause");
	return 0;
}
