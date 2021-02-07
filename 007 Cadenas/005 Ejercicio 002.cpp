/*Ejercio 2 :Pedir al usario una cadena de caracteres almacenarla 
en un arreglo y copiar todo su contendiod haci otro arreglo de 
caracteres*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[30];
	//pedimos la palabra al usuauiro 
	cout<<"Digita una palabra: ";
	
	//la asignamos al arreglo 
	cin.getline(palabra,20,'\n'); 
	
	//creamo un arreglo en donde copiaremos 
	char copia[strlen(palabra)];
	strcpy(copia,palabra);
	
	//mostramos la nueva cadena 
	cout<<copia<<endl;
	
	
	
	system("pause");
	return 0;
}
