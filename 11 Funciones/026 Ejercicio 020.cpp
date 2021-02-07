/*Fibonacci*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int fibo(int num);
int main(){
	int num=6;
	int fibona;
	fibona=fibo(num);
	cout<<fibona<<endl;
	
	
	system("pause");
	return 0;
}

int fibo(int num){
	int suma;
	if(num<=1){
		suma = 1;
	}else{
		suma=fibo(num-1)+fibo(num-2);
	}
	return suma;
	
}
