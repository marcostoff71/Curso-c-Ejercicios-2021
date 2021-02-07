//Ejercicio 6: Escribe un programa que defina un vector de 
//números y calcule si existe algún número en el vector cuyo valor
//equivale a la suma del resto de números del vector.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int cantidad,sumaElementos=0;
	
	do{
	cout<<"Dame la cantidad de elementos de vector: ";cin>>cantidad;
	}while(cantidad<1);
	
	int numeros[cantidad];
	
	for(int i=0;i<cantidad;i++){
		
		
		cout<<"Dame el elemento "<<i+1<<" : ";
		cin>>numeros[i];
		
		
		
		
		if(numeros[i]==sumaElementos){
			cout<<"El numero ["<<numeros[i]<<"] es igual a la suma de las cantidad anteriores "<<sumaElementos<<endl;
		}
		sumaElementos+=numeros[i];
	}
	
	for(int i=0;i<cantidad;i++){
		
	}
	
	system("pause");
	return 0;
}
