/* Ejercicio 9
Realice un programa que lea un cadena de caracteres de la entrada 
estadnar y muestre en la salida estandar cuantas ocurrensias de cada
vocal existen en la cadena */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	
	char vocales[]="aeiouAEIOUáéíóúÁÉÍÓÚ";
	char letras[50];
	int contador;
	
	cout<<"inserta un texto: ";
	cin.getline(letras,50,'\n');
	
	
	for(int i=0;i<strlen(letras);i++){
		for(int j=0;j<strlen(vocales);j++){
			if(letras[i]==vocales[j]){
				contador++;
			}
		}
	}
	cout<<contador<<endl;
	
	system("pause");
	return 0;
}
