/*Ejercicio 1: Comprobar si un n�mero es par o impar,
 y se�alar la posici�n de memoria donde se est� guardando
  el n�mero. Con punteros.*/
#include<iostream>
#include<conio.h>

using namespace std;
void numParImpar();
int main(){	
	numParImpar();

	getch();
	return 0;
}
void numParImpar(){
	int num,*direNum;
	
	cout<<"Dame el numero: ";cin>>num;
	//declaramos el puntero
	direNum=&num;
	if(*direNum%2==0){
		cout<<"El numero "<<*direNum<<" es par "<<endl;
		cout<<"La posicion de memoria es: "<<direNum;
	}else{
		cout<<"El numero "<<*direNum<<" es impar "<<endl;
		cout<<"La posicion de memoria es: "<<direNum;
		
	}
	
}

