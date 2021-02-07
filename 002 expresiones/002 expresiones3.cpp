//Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
#include<iostream>
using namespace std;

int main(){
	float a,b,c,d,result;
	
	cout<<"Dame el numero a: ";cin>>a;
	cout<<"Dame el numero b: ";cin>>b;
	cout<<"Dame el numero c: ";cin>>c;
	cout<<"Dame el numero d: ";cin>>d;
	
	result = (a+b)/(c+d);
	
	cout.precision(3);
	
	cout<<"\nEl resultado es: "<<result<<endl;
	
	
	return 0;
}
