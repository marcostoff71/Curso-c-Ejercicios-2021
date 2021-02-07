/*Ejercicio 2:  Determinar si un número es primo o no; con puteros y además indicar en
que posicion de memoria se guardo el número.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int num,*pnum;

int main(){
	int num,*pnum;
	
	pnum=&num;
	
	cout<<"Dame un numero: ";cin>>*pnum;
	int contpar=0;
	for(int i=1;i<=*pnum;i++){
		if(*pnum%2==0){
			contpar++;
		}
	}
	
	if(contpar==2){
		cout<<"\nEl numero "<<*pnum<<" es primo"<<endl;
		cout<<"Direccion de memoria: "<<pnum<<endl;
	}else{
		cout<<"\nEl numero "<<*pnum<<" no es primo"<<endl;
		cout<<"Direccion de memoria: "<<pnum<<endl;
	}
	
	
	system("pause");
	return 0;
}
