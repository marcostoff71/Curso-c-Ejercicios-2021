/*Ejercicio 7: Realiza un programa que defina dos vectores de 
caracteres y después almacene el contenido de ambos vectores en un nuevo vector,
 situando en primer lugar los elementos del primer vector seguido por los elementos del 
 segundo vector. Muestre el contenido del nuevo vector en la salida estándar.*/
 
 
#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	
	char letra1[]{'a','e'};
	char letra2[]{'i','o'};
	
	char unida[4];
	
	
	for(int i=0;i<2;i++){
		unida[i]=letra1[i];
	}
	
	for(int i=2;i<4;i++){
		unida[i]=letra2[i-2];
	}
	
	for(int i=0;i<4;i++){
		cout<<unida[i]<<" ";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
