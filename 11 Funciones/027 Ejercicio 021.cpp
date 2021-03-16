/*Ejercicio 21: Escriba una función recursiva que calcule un 
número elevado a una potencia entera mayor o igual que cero: x^y. }*/
#include<iostream>
#include<stdlib.h>

using namespace std;
int numPotencia(int n,int p);
int main(){
	int num,po,resultado;
	cout<<"Dame el numero: ";
	cin>>num;
	cout<<"Dame la potencia: ";
	cin>>po;
	resultado=numPotencia(2,3);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	system("pause");
	return 0;
}
int numPotencia(int n,int p){
	int resultado;
	if(p==1){
		resultado=n;
	}else{
		resultado=n*numPotencia(n,p-1);
	}
	return resultado;
}
