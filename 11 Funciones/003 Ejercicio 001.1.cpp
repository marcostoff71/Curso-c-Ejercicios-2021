//Ejercio 1
/*Escribe una funcion llamada mul() qie acepte dos numero en punto 
flotante como paramentros, multimplique estos numero y despliege el 
resultado*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//prototipo de la funcion 
float num1,num2;
void PedirDatos();
void multi(float num1,float num2);


int main(){
	PedirDatos();
	multi(num1,num2);
	
	
	system("pause");
	return 0;
}
void PedirDatos(){
	cout<<"Dame el primero numero: ";cin>>num1;
	cout<<"ame el segundo numero: ";cin>>num2;
	
}
void multi(float num1,float num2){
	
	float resultado;
	resultado=num1*num2;
	
	cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
}
