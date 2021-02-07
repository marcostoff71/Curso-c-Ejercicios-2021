/*Ejercicio 7: Intercambiar el valor de 2 variables itilizando paso 
por referencia */
#include<iostream>
#include<stdlib.h>
using namespace std;
void Intercambiar(int& n1,int &n2);

int main(){
	int num1=10,num2=15;
	cout<<"El valor de num1 es: "<<num1<<endl;
	cout<<"El valor de num2 es: "<<num2<<endl;
	Intercambiar(num1,num2);
	cout<<"\nEl nuevo valor de num1 es: "<<num1<<endl;
	cout<<"El nuevo valor de num2 es: "<<num2<<endl;
	system("pause");
	return 0;
}
void Intercambiar(int& n1,int &n2){
	int aux;
	aux=n1;
	n1=n2;
	n2=aux;
}
