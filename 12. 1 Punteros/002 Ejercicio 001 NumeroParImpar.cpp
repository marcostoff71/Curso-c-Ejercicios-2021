/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posicion de memoria 
donde se está guardando el número. Con punteros.*/
#include<iostream>
#include<stdlib.h>

using namespace std;
//con * accedemos a la varible
//sin accedemos a la memoria
int main(){
	int num=0,*pnum;
	pnum=&num;
	cout<<"Dame el numero: ";cin>>*pnum;
	if(*pnum%2==0){
		cout<<"\nEl numero "<<*pnum<<" es par"<<endl;
		cout<<"Direccion de memoria: "<<pnum<<endl;
	}else{
		cout<<"\nEl numero "<<*pnum<<" es impar"<<endl;
		cout<<"Direccion de memoria: "<<pnum<<endl;
	}
	
	
	system("pause");
	return 0;
}
