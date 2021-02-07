/* Ejercicio 3 Pedir al usuario que digite 2 cadenas de caracteres
e indicar si ambas cadenas son iguales, en caso de no serlo indicar
cual es mayor alfabeticamente*/


#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main(){
	char palabra1[20],palabra2[20];
	//pedimos la primer cadena 
	cout<<"Dame la primer cadena: ";
	cin.getline(palabra1,20,'\n');
	//pedimos la segunda cadena
	cout<<"Dame la segunda cadena: ";
	cin.getline(palabra2,20,'\n');
	
	//comprobamos la cadena 
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"las cadenas son iguaes"<<endl;
	}else if(strcmp(palabra1,palabra2)>0){
		cout<<"La primer cadena tiene mayor peso"<<endl;
	}else{
		cout<<"la segunda cadena tiene mayor peso"<<endl;
	}
	
	
	system("pause");
	return 0;
}
