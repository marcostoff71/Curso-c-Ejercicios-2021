//Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num,factorial=1;
	
	cout<<"Dame el numero del cual deseas saber su factorial: ";cin>>num;
	
	//for(int i=num;i>=1;i--){
		
	//	factorial=factorial*i;
	//}
	for(int i=1;i<=num;i++){
		
		factorial=factorial*i;
	}
	
	cout<<factorial<<endl;
	system("pause");
	return 0;
}
