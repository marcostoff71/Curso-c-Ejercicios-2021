/*Ejercicio 16: Realice un programa que calcule la descomposici�n en factores primos de un n�mero entero.
Por ejemplo: 20 = 2*2*5.*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int numero;
	
	
	cout<<"Digita un numero: ";cin>>numero;
	
	
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero/=i;
		}
	}
	
	
	
	
	
	system("pause");
	return 0;
}

