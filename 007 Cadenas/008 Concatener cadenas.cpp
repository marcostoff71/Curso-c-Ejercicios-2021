//añadir o concatenar un cadena con otra - Funcion strcat();

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main(){
	
	char cat1[]="Esto es una cadena ",cat2[]="ejemplo";
	char juntos[strlen(cat1)+strlen(cat2)];
	
	//copiamos
	strcpy(juntos,cat1);
	//concatenamos 
	strcat(juntos,cat2);
	
	
	cout<<juntos<<endl;
	system("pause");
	return 0;
}
