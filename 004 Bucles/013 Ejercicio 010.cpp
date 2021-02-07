//Ejercicio 10: Escriba un programa que calcule el 
//valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	
	int num,factorial=1,suma=0;
	
	cout<<"Dame el numero de elementos: ";cin>>num;
	
	for(int i=1;i<=num;i++){
		factorial*=i;
		suma+=factorial;
	}
	
	cout<<factorial<<endl;
	cout<<suma<<endl;
	
	system("pause");
	return 0;
}
