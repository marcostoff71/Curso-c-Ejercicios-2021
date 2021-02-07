//copiar el contenido de una cadena a otra - funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[]= "marco";
	char nombreCopia[strlen(nombre)];
	//copiamos la cadena 
	strcpy(nombreCopia,nombre);
	//mostramos la cadena copiada 
	cout<<nombreCopia<<endl;
	getch();
	return 0;
}
