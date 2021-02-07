/*Ejercicio 7 
Pedir nombre al usuario en MAYUSCULAS si su nombre comienza con la 
letra A Conventir su nombre a minusculas, caso contrario no convertirlo*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	
	char nombre[20];
	cout<<"Dame tu nombre en mayusculas: ";
	cin.getline(nombre,20,'\n');
	strupr(nombre);
	
	if(strncmp(nombre,"A",1)==0){
		strlwr(nombre);
		cout<<nombre<<endl;
	}else{
		cout<<nombre<<endl;
	}
	system("pause");
	return 0;
}

