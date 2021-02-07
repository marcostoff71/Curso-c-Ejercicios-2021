/*Ejercicio 1: Realice un programa que solicite de la entrada 
estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.*/
#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){
	int num;
	int resultado;
	
	do{
		//pedimos el numero y validamos que no sea menor a 1 ni menor 12
		//si es asi que se repita de nuevl
	cout<<"Dame el numero: ";cin>>num;
	}while(num<1||num>12);
	
	
	for(int i=1;i<=10;i++){
		//multiplicamos el numero 
		//numero de usurario por i
		resultado=num*i;
		//mostramos en la salida el resultado de la division
		cout<<num<<" * "<<i<<" = "<<resultado<<endl;
	}
	
	
	
	system("pause");
	return 0;
}

