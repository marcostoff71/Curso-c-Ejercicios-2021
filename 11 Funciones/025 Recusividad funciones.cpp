/*Recursividad
factorial de un numero 3! = 3*2*1

factoriaL(n) = 1 					si n<=1
				n*factorial(n-1)    si n>1
*/


#include<iostream>
#include<stdlib.h>


using namespace std;
int factorial(int num);
int main(){
	int num;
	cout<<"Factorial de un numero"<<endl;
	cout<<"Dame el numero: ";
	cin>>num;
	
	num=factorial(num);
	cout<<num<<endl;
	
	
	system("pause");
	return 0;
}
int factorial(int num){

	//caso base
	if(num<=1){
		return 1;
	}else{
	//caso iducivo
	//num*=factorial(num-1);
	return num*factorial(num-1);
	}
}
