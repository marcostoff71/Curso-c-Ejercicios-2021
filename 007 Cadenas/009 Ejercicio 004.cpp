/*Ejercicio 4 Crear una cadena que tenga la siguiente frase 
"Hola que tal",luego crear otra cadena para preguntarle al usuario 
su nombre y por ultimo añadir el nombre final de la primera cadena
y mostrar el mensaje completo "Hola que tal (nombre del usario)"
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	
	char saludo[30]="Hola que tal ";
	char nombre[20];
	
	cout<<"Dame tu nombre: ";
	cin.getline(nombre,20,'\n');
	
	strcat(saludo,nombre);
	
	
	cout<<saludo<<endl;
	
	
	system("pause");
	return 0;
}
