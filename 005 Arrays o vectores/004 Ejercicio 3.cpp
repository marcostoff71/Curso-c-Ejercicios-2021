//Ejercicio 3: Escribe un programa que lea de la entrada estándar un 
//vector de números y muestre en la salida estándar 
//los números del vector con sus índices asociados.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int elementos;
	cout<<"Dame los elementos del vector: ";cin>>elementos;
	int numeros[elementos];
	
	for(int i=0;i<elementos;i++){
		cout<<"Dame el numero "<<i+1<<" :";
		cin>>numeros[i];
	}
	
	
	for(int i=0;i<elementos;i++){
		cout<<"Numero de vector ["<<numeros[i]<<"] Indice:"<<i<<endl;
	}
	
	
	system("pause");
	return 0;
}
