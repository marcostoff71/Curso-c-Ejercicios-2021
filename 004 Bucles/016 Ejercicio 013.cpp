//Ejercicio 13: Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n  

#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
	
	int num,a=0,b=1,aux=0;
	
	cout<<"Dame el numero: ";cin>>num;
	
	for(int i=0;i<num;i++){
		aux=a+b;
		a=b;
		b=aux;
		
		
		
		
	}
	cout<<"Fibonnacci de "<<num<<" = "<<aux<<endl;
	
	system("pause");
	return 0;
}
