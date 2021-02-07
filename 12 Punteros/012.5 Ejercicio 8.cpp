/*Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

char nombre[40];
void pedirDatos();
void vocales(char *);

int main(){
	pedirDatos();
	vocales(nombre);
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame tu nombre: ";
	cin.getline(nombre,40,'\n');
	
}
void vocales(char *nom){
	int longi;
	int Ca=0,Ce=0,Ci=0,Co=0,Cu=0;
	longi=strlen(nombre);
	strupr(nom);
	for(int i=0;i<longi;i++){
		switch(*(nom+i)){
			case 'A':
			case 'Á': Ca++; break;
			case 'E':
			case 'É': Ce++; break;
			case 'I':
			case 'Í': Ci++; break;
			case 'O':
			case 'Ó': Co++; break;
			case 'U':
			case 'Ú': Cu++; break;
				
		}
	}
	
	cout<<"Tu nombre tiene"<<endl;
	cout<<"Vocal A: "<<Ca<<endl;
	cout<<"Vocal E: "<<Ce<<endl;
	cout<<"Vocal I: "<<Ci<<endl;
	cout<<"Vocal O: "<<Co<<endl;
	cout<<"Vocal U: "<<Cu<<endl;
}
