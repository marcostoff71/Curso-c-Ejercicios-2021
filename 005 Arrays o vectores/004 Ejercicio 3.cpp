//Ejercicio 3: Escribe un programa que lea de la entrada est�ndar un 
//vector de n�meros y muestre en la salida est�ndar 
//los n�meros del vector con sus �ndices asociados.

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
