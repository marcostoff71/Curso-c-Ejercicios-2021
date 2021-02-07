//Ejercicio 8: Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>
#include<stdlib.h>

using namespace std;
 
 
int main(){
	
	int num,suma=0;
	
	cout<<"Digital el numero: ";cin>>num;
	
	
	for(int i=1;i<=(2*num-1);i+=2){
		suma+=i;
		
	}
	cout<<"suma: "<<suma<<endl;
	
	
	
	
	system("pause");
	return 0;
	
}
