//Ejercicio 2: Escribe un programa que defina un vector
// de números y calcule la multiplicación acumulada de sus elementos.
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int elementos,sumaMulti=1;
	
	cout<<"Dame el numero de elementos del vector: ";cin>>elementos;
	int numeros[elementos];
	
	for(int i=0;i<elementos;i++){
		cout<<"Dame el elemento "<<i+1<<" : ";
		cin>>numeros[i];
	}
	
	for(int i=0;i<elementos;i++){
		sumaMulti*=numeros[i];
	}
	
	
	cout<<"\nLa multiplicacion de los elementos es: "<<sumaMulti<<endl;
	
	
	system("pause");
	return 0;
}
