/*Ejercicio 7: Escriba un programa que solicite una edad 
(un entero) e indique en la salida estándar si la edad introducida está
 en el rango [18-25].*/
 
#include<iostream>

using namespace std;

int main(){
	
	int edad;
	cout<<"Introduce tu edad: ";
	cin>>edad;
	
	if(edad>=18&&edad<=25){
		cout<<"Su edad esta en el rango"<<endl;
	}else{
		cout<<"Su edad no esta en el rango"<<endl;
	}
	
	
	return 0;
}
