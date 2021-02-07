/*Ejercicio 8: Escribe un programa que lea de la entrada estándar tres
 números. Después debe leer un cuarto número e indicar si el número 
 coincide con alguno de los introducidos con anterioridad.*/
#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3,num4;
	cout<<"Ingresa 3 numero";
	cin>>num1>>num2>>num3;
	cout<<"Ingresa el primer numero: ";cin>>num1;
	cout<<"Ingresa el segundo numero: ";cin>>num2;
	cout<<"Ingresa el tercer numero: ";cin>>num3;
	cout<<"Ingresa el cuarto numero: ";cin>>num4;
	
	if(num4==num1||num4==num2||num4==num3){
		
		cout<<"El cuarto numero coincide con los numeros ingresados anteriormente"<<endl;
	}else{
		cout<<"El cuarto numero no coincide con los numeros ingresados anteriormente"<<endl;
	}
	
	
	
	return 0;
}
