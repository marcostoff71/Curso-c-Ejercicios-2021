//invertit una cadena - funcion strrev()

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[]="hola";
	
	//inventir el nombre
	strrev(nombre);
	cout<<nombre<<endl;	
	
	system("pause");
	return 0;
}
