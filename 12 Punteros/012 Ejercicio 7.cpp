/*Ejercicio 7: Pedir su nombre al usuario y devolver el número de vocales que hay. 
NOTA: Recuerda que debes utilizar punteros.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

char nombre[30];

void pedirDatos();
void vocales(char*);

int main(){
	pedirDatos();
	vocales(nombre);
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame tu nombre: ";
	cin.getline(nombre,30,'\n');
	
}
void vocales(char *nom){
	char vocales[]="AEIOUÁÉÍÓÚ";
	int cont=0;
	strupr(nom);
	int longitud;
	longitud=strlen(nom);
	for(int i=0;i<longitud;i++){
		for(int j=0;j<10;j++){
			if(*(nom+i)==vocales[j]){
				cont++;
			}
		}
		//nom++;
		
	}
	
	if(cont<=0){
		cout<<"Tu nombre no tiene vocales"<<endl;
	}else{
		cout<<"Tu nombre tiene "<<cont<<" vocales"<<endl;
	}
	
	
}
