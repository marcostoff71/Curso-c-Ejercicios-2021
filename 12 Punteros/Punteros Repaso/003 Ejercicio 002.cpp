#include<iostream>
#include<stdlib.h>
//numero primo con punteros
using namespace std;

bool esPrimo(int num){
	int cont;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			cont++;
		}
	}
	if(cont==2){
		return true;
	}else{
		return false;
	}
}

int main(){
	int num,*numP,cont;
	
	cout<<"Ingresa un numero: ";
	cin>>num;
	
	numP=&num;
	if(esPrimo(*numP)){
		cout<<"El numero: "<<*numP<<" es primo";
		cout<<" posicion en memoria "<<numP<<endl;
	}else{
		cout<<"El numero: "<<*numP<<" no es primo";
		cout<<" posicion en memoria "<<numP<<endl;
	}
	
	
	system("pause");
	return 0;
}
