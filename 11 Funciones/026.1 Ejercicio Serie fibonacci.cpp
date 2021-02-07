//serie fibonacci 
#include<iostream>
#include<stdlib.h>

using namespace std;

void pediDatos();
int fibo(int num);


int main(){
	//forma normal
	int a=0,b=0,re=1;
	
	for(int i=0;i<6;i++){
		a=b;
		b=re;
		re=a+b;
	}
	cout<<"Pruba: "<<re<<endl;
	
	
	pediDatos();
	
	system("pause");
	return 0;
}

void pediDatos(){
	int num;
	cout<<"Serie fibonacci"<<endl;
	cout<<"Ingresa el numero: ";cin>>num;
	num=fibo(num);
	cout<<"El resultado es: "<<num<<endl;
	
}
int fibo(int num){
	int resultado;
	if(num<=1){
		return 1;
	}else{
		resultado=fibo(num-1)+fibo(num-2);
	}
	
	return resultado;
}
