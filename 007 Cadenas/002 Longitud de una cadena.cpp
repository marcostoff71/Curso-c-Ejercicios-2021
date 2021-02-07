//longitud de una cadena de caracteres - fincion strlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main(){
	
	char palabra[]="pepedsdds";
	int longitud= strlen(palabra);
	cout<<"numero de elementos de la cadena es :"<<strlen(palabra)<<endl;
	
	getch();
	return 0;
}
