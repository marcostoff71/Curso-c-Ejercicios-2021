/*Ejercicio 5: Escriba un programa que lea valores enteros 
hasta que se introduzca un valor en el rango [20-30] o se 
introduzca el valor 0. El programa debe entregar la suma 
de los valores mayores a 0 introducidos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int num,cont=0;
	
	do{
		//pedimos el nuemro 
		cout<<"Ingresa el numero: ";cin>>num;
		//hacemos la suma de los numero mayores a 0
		if(num>0){
			cont+=num;
		}
		//si el numero es esta en el rango 20 y 30 se cierra 
		//y si es igual a 0 se cirre 
	}while((num<20 || num >30)&&num!=0);
	
	//mostramos la usma de los numero ingresador mayores a 0
	cout<<"Suma de numeros ingresados mayores a 0: "<<cont<<endl;
	
	system("pause");
	return 0;
}
