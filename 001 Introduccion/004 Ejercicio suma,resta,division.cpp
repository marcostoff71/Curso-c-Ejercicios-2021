/*Ejercicio 1: Escribe un programa que lea de la entrada estándar 
dos números  y muestre en la salida estándar su suma, resta, 
multiplicación y división.*/
#include<iostream>
using namespace std;
int main (){
	float num1,num2,suma=0,resta=0,multiplicacion=0,division=0;
	
	cout<<"Ingresa el primer numero: ";cin>>num1;
	cout<<"Ingresa el segundo numero: ";cin>>num2;
	//hacemos las operaciones
	
	
	
	
	//mostramos los resultados
	suma=num1+num2;
	cout<<"\nLa suma es: "<<suma<<endl;
	resta=num1-num2;
	cout<<"La resta es: "<<suma<<endl;
	multiplicacion=num1*num2;
	cout<<"La multiplicacion es: "<<suma<<endl;
	if(num2==0){
		cout<<"No se puede dividir entre 0";
	}
	else
	{
	division=num1/num2;
	cout<<"La division es: "<<suma<<endl;
	}
	
	return 0;
}
