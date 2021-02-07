//Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+...+n


#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int num,suma=0;
	//pedimos el numeor al usuario 
	cout<<"Digita el numero: ";cin>>num;
	//hacemos un bucle hasta el numero dado por el usuario 
	for(int i=1;i<=num;i++){
		
		//sumamos i+i+i
		//hasta el numero dado por el usuario 
		suma+=i;
		
		
		
	}
	
	cout<<"La suma es: "<<suma<<endl;
	
	
	
	system("pause");
	return 0;
	
}
