//Ejercicio 2
/* Escribe una funcion llamada alCuadrado() que calcule el cuadrado
de un valor que se le trasnsmite y despliege el resultado. la funcion
deverea ser capas de elevar numeros flotates*/

#include<iostream>
#include<stdlib.h>

using namespace std;
//prototipps 
float num;
void pedirNum();
void AlCuadrado();
int main(){
	
	//lalamos a las fucniones desde la funcion principal
	pedirNum();
	AlCuadrado();
	
	
	system("pause");
	return 0;
}


void pedirNum(){
	cout<<"Dame un numero para elevarlo al cuadrado: ";
	cin>>num;
}

void AlCuadrado(){
	float resultado=num*num;
	cout<<"\nEl resultado de: "<<num<<"^2 = "<<resultado<<endl;
}
