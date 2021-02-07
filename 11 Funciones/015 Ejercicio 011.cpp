/*Ejercicio 11: Realice una función que tome como parámetros un 
vector de números enteros y devuelva la suma de sus elementos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
//prototipo de funcion

void pedirDatos();
int sumaArray(int num[],int tam);
void muestra(int suma);


int main(){
	pedirDatos();
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	int tam;
	cout<<"Dame los elemtntos de vector: ";
	cin>>tam;
	//pedimos los datos al usario 
	int numeros[tam];
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>numeros[i];
	}
	//llamamos a la funcion sumaArray;
	int suma;
	suma=sumaArray(numeros,tam);
	
	//llamamos a otra funcion para mostrar los datos 
	muestra(suma);
	
}
int sumaArray(int num[],int tam){
	int suma=0;
	for(int i=0;i<tam;i++){
		suma+=num[i];
	}
	
	return suma;
}

void muestra(int suma){
	
	
	cout<<"La suma del array da como resltado: "<<suma<<endl;
}
