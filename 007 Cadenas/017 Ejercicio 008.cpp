/*Ejercicio 8
Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el
otro real, convertitlo a sus respectivos valores y por ultimo 
sumarlos*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main(){
	char num1[1000],num2[1000];
	int ent;
	float flo,resultado;
	
	
	//pedimos los nuemros 
	cout<<"Escribe numeros enteros: ";
	cin.getline(num1,1000,'\n');
	
	cout<<"Escribe numeros decimales: ";
	cin.getline(num2,1000,'\n');
	
	//convertimos 
	
	ent=atoi(num1);
	flo=atof(num2);
	//hacemos la suma 
	
	resultado=ent+flo;
	
	//mostramos en consola
	
	cout<<"La suma de los anteriores numeros es: "<<resultado<<endl;
	
	
	
	
	
	system("pause");
	return 0;
}
