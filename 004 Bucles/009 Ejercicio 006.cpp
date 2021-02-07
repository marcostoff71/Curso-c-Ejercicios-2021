/*Ejercicio 6: Escriba un programa que calcule x^y, 
donde tanto x como y son enteros positivos, sin utilizar la función pow.*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	//declaramos las varibles necesarias
	int num,potencia,resultado=1;
	//pedimos el numero 
	cout<<"Dame el numero: ";cin>>num;
	//pedimos la potencia 
	cout<<"Dame la potencia: ";cin>>potencia;
	
	//hacemos un bucle con el numero de potencias 
	for(int i=1;i<=potencia;i++){
		//guardamos en resultado 
		//la multiplicacion hacia el numero dado por el usuario 
		resultado=resultado*num;
		
	}
	//mostramos al usuario la potencia 
	cout<<num<<" potencia "<<potencia<<" = "<<resultado<<endl;
	
	
	getch();
	return 0;
}
