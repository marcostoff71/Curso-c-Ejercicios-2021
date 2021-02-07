//Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main(){
	int potencia,suma,num;
	
	
	cout<<"Dame el numero de elementos a sumar : ";cin>>num;
	
	for(int i=1;i<=num;i++){
		
		potencia=pow(2,i);
		suma+=potencia;
	}
	
	
	cout<<"\tLa suma total es: "<<suma<<endl;
	
	
	
	system("pause");
	return 0;
}
