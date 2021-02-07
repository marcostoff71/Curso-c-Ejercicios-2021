/*Relice un programa que lea un valor entrero y determine si se trata 
de un numero para o impar*/
#include<iostream>
#include<cctype>
using namespace std;

int main(){
	int num;
	do{
	cout<<"Dame un numero positivo: ";cin>>num;
	}while(num<=0);
	
	if((num%2)==0){
		cout<<"El numero: "<<num<<" es par"<<endl;
	}else{
		cout<<"El numero: "<<num<<" es impar"<<endl;
	}
	
	
	
	return 0;
}


