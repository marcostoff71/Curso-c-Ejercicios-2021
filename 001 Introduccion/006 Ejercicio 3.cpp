/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/
#include<iostream>
using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digita tu edad: "; cin>>edad;
	cout<<"Digita tu sexo: "; cin>>sexo;
	cout<<"Digita tu altura en metros: "; cin>>altura;
	
	cout<<"\nTu edad es"<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	
	
	
	return 0;
}
