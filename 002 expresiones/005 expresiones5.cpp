//Ejercicio 5: Escriba un fragmento de programa que intercambie
// los valores de dos variables.
/*
x=10;
y=5;
Final
x=5;
y=10;
*/

#include<iostream>
using namespace std;
int main(){
	
	float x,y,aux;
	
	cout<<"Ingresa el valor de x: ";cin>>x;
	cout<<"Ingresa el valor de y: ";cin>>y;
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"\nEl valor de x es: "<<x<<"\n";
	cout<<"El valor de y es: "<<y<<endl;
	
	
	return 0;
}

