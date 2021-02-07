//Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando
//punteros indicar cuales son números pares y su posición en memoria.
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
