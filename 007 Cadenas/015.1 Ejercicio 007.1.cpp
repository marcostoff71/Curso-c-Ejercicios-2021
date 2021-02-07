/*Ejercicio 7 
Pedir nombre al usuario en MAYUSCULAS si su nombre comienza con la 
letra A Conventir su nombre a minusculas, caso contrario no convertirlo*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
using std::string;
int main(){
	
	string nombre;
	cout<<"Dame tu nombre en mayusculas: ";
	cin>>nombre;
	
	
	cout<<nombre<<endl;
	
	cout<<nombre.length()<<endl;
	
	char letra= toupper(nombre[0]);
	cout<<letra<<endl;
	
	system("pause");
	return 0;
}

