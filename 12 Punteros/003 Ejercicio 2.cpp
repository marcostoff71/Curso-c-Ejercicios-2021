/*Ejercicio 2: Determinar si un n�mero es primo o no; 
con puteros y adem�s indicar en que posici�n de memoria 
se guardo el n�mero.*/
#include<iostream>
#include<stdlib.h>

using namespace std;
bool esPrimo(int num);
void pedirDatos();


int main(){
	pedirDatos();
	
	
	system("pause");
}

void pedirDatos(){
	int num,*dirNum;
	bool primo;
	
	
	cout<<"\tNumeros primos"<<endl;
	
	do{
	cout<<"Ingresa el numero: ";cin>>num;
	}while(num<2);
	
	dirNum=&num;
	
	primo=esPrimo(*dirNum);
	
	if(primo){
		cout<<"\nEl numero: "<<*dirNum<<" es primo"<<endl;
		cout<<"Direecion del numero en memoria: "<<dirNum<<endl;
	}else{
		cout<<"\nEl numero: "<<*dirNum<<" no es primo"<<endl;
		cout<<"Direecion del numero en memoria: "<<dirNum<<endl;
	}
	
	
	
	
}
bool esPrimo(int num){
	int divisores=0;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			divisores++;
		}
	}
	
	if(divisores==2){
		return true;
	}else{
		return false;
	}
	
}
