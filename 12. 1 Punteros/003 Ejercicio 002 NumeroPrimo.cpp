/*Ejercicio 2:  Determinar si un número es primo o no; con puteros y además indicar en
que posicion de memoria se guardo el número.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
void pedirInfo();

bool esprimo(int*);
int num,*pnum;

int main(){
	pedirInfo();
	
	system("pause");
	return 0;
}
void pedirInfo(){
	cout<<"Dame un numero: ";cin>>num;
	bool numPrimo;
	pnum=&num;
	
	numPrimo=esprimo(pnum);
	
	if(numPrimo==true){
		cout<<"El numero "<<*pnum<<" es primo"<<endl;
		cout<<"Posicion de memoria: "<<pnum<<endl;
	}else{
		cout<<"El numero "<<*pnum<<" no es primo"<<endl;
		cout<<"Posicion de memoria: "<<pnum<<endl;
	}
	
}
bool esprimo(int* num){
	bool primo;
	int cont=0;
	for(int i=1;i<=*num;i++){
		if(*num%i==0){
			cont++;
		}
	}
	
	if(cont==2){
		primo=true;
	}else{
		primo=false;
	}
	
	return primo;
}
