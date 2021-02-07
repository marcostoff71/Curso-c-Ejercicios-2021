//Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n


#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	int num,resultado,suma=0;
	
	cout<<"Dame el numero: ";cin>>num;
	for(int i=2;i<=num;i+=2){
		resultado=(i-1)-i;
		suma+=resultado;
		
		
	}	
	
	cout<<suma<<endl;
	
	system("pause");
	return 0;
}
