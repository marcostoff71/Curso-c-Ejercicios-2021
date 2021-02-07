//Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.


#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	
	//declaramos las variables 
	int num,suma=0;
	//pedimos los numeros a sumar
	cout<<"Dame los numero a sumar: ";cin>>num;
	//creamos el array con la cantidad de numeros
	int numeros[num];
	//pedimos los numeros
	for(int i=0;i<num;i++){
		
		cout<<"Dame el numero "<<i+1<<": ";
		cin>>numeros[i];
	}
	//hacemos la suma de todos los elementos 
	for(int i=0;i<num;i++){		
		suma+=numeros[i];
	}
	//mostramos la suma de los elementos
	cout<<"La suma de los elementos es: "<<suma<<endl;

	system("pause");
	return 0;
}
