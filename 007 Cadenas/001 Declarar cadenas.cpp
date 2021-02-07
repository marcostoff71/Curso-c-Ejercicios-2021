//cadenas en c++


#include<iostream>
#include<stdlib.h>
#include<string.h>//importante 

using namespace std;
int main(){
	//ingresar cadena de caracters
	char palabras[]="Pepe";
	//ingresar caracteres
	char palabras2[]{'l','u','i','s'};
	//prdir un nombre y ingresarlo
	char nombre[30];
	//mostar laas palabras
	cout<<palabras<<endl;
	//mostrar la palabra 2
	cout<<palabras2<<endl;
	//tambien se puede usar un bucle
	for(int i=0;i<4;i++){
		cout<<palabras[i];
	}
	cout<<endl;
	//pedimos el nombre al usuaurio 
	
	cout<<"Digita tu nombre: ";
	//gets(nombre);//lo guardadmos con gets
	cin.getline(nombre,30,'\n');
	
	//mostramos el nombre
	
	cout<<nombre<<endl;
	
	
	
	system("pause");
	return 0;
}

