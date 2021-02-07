/*Ejercio 6
Converit dos cadnas de minusculas a MAYUSCULAS. compararlas y decir
si son iguales o no */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[20];
	char palabra2[20];
	
	cout<<"Escribe algo: ";
	cin.getline(palabra1,20,'\n');
	
	cout<<"\nEscribe algo: ";
	cin.getline(palabra2,20,'\n');
	
	
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"las palabras son iguales"<<endl;
	}
	
	system("pause");
	return 0;
}

