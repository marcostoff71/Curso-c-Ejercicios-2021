//Ejercicio 1: Escribe la siguiente expresión como expresión en C++: (a/b) + 1
#include<iostream>
using namespace std;
int main(){
	float a,b,resultado;
	cout<<"Digita el valor de a: ";cin>>a;
	cout<<"Digita el valor de b: ";cin>>b;
	
	resultado=(a/b)+1;
	//precicion para redondear
	cout.precision(2);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}
