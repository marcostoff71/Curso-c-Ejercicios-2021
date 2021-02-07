/*Ejercicios 3: Realice un programa que calcule y muestre en la
 salida estándar la suma de los cuadrados de los 10 primeros enteros 
 mayores que cero.*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
	float num,resultado=0;
	
	
	//hacemos el bucle 
	for(int i=1;i<=10;i++){
		//guardamos en la varible reultadp el cuadrado de los numeros
		//sacamos el cuadro de los numeros con pow 
		//pow(numero,potencia)
		resultado+=pow(i,2);
	}
	
	//mostramos la suma de toso los cuadrados enteros 10
	cout<<"La suma de los cuadrados es: "<<resultado<<endl;
	
	
	system("pause");
	return 0;
}
