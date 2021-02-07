//Ejercicio 3: Escribe la siguiente expresión como expresión en C++: 
//(a+(b/c))/(d+(e/f))

#include<iostream>
using namespace std;
int main(){
	
	float a,b,c,d,e,f,resultado=0;
	
	cout<<"Dame el valor de a: ";cin>>a;
	cout<<"Dame el valor de b: ";cin>>b;
	cout<<"Dame el valor de c: ";cin>>c;
	cout<<"Dame el valor de d: ";cin>>d;
	cout<<"Dame el valor de e: ";cin>>e;
	cout<<"Dame el valor de f: ";cin>>f;
	
	resultado=(a+(b/c))/(d+(e/f));
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	
	
	
	return 0;
}
