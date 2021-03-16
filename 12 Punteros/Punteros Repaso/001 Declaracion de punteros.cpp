#include<iostream>
#include<stdlib.h>

using namespace std;

/*
Punteros es una varible que almacena la direccion de otra
variable
	&n =La direccion de n
	*n =La varible cuya direccion esta almacenada en n
*/
int main(){
	//puntero es una d
	int num,*numPun;
	
	num=20;
	
	numPun = &num;//declaracion de un puntero
	cout<<"Numero: "<<num<<endl;
	
	//posicion de memoria de num
	cout<<"Direccion de memoria: "<<&num<<endl;
	
	//posicion de meoria de un puntero
	cout<<"\nNumero: "<<*numPun<<endl;
	cout<<"Direccion de memoria: "<<numPun<<endl;
	
	system("pause");
	return 0;
}
