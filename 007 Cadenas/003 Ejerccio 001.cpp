/* Ejercico 1 hacer un programa que pida al usario que digite una cadena 
de caraceres, luego verificar la longitud de la cadena , y si esta 
supera a 10 caracters mostrar un menaje en pantalla ,caso contrario
no mostrar*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main(){
	cout<<"Escribe : ";
	char palabras[20];
	cin.getline(palabras,20,'\n');
	
	int longitud;
	longitud=strlen(palabras);
	
	
	if(longitud>10){
		cout<<"\nla longitud tiene mas de 10 caracteres"<<endl;
		cout<<palabras<<endl;
	}else{
		cout<<"la cadena no supera 10 caracteres"<<endl;
	}
	
	
	system("pause");
	return 0;
}
