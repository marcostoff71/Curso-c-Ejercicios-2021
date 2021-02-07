//Ejercicio 8: Hacer un programa que lea 5 números en un arreglo,
// los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.


#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	
	
	int cantidad;
	cout<<"Dame la cantidad de elementos: ";cin>>cantidad;
	
	int numeros1[cantidad];
	int numeros2[cantidad];
	for(int i=0;i<cantidad;i++){
		
		cout<<"Dame el elemnto "<<i+1<<" : ";
		cin>>numeros1[i];
	}
	
	for(int i=0;i<cantidad;i++){
		numeros2[i]=numeros1[i]*2;
		
		cout<<numeros2[i]<<endl;
	}
	
	
	
	system("pause");
	return 0;
}
