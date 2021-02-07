//Escribe un programa que determine cual es el mayor de tres numeros
#include<iostream>
using namespace std;

int main(){
	float num1=0,num2=0,num3=0;
	cout<<"Inserta el primer numero: ";
	cin>>num1;
	cout<<"Inserta el segundo numero: ";
	cin>>num2;
	cout<<"Inserta el tecer numero: ";
	cin>>num3;
	
	if(num1>num2&&num1>num3)
	{
		cout<<"\nEl numero mayor es el primero: "<<num1<<endl;
		
	}else if(num2>num3&&num2>num1){
		cout<<"El numero mayor es el segundo: "<<num2<<endl;
		
	}else if(num3>num1&&num3>num2){
		cout<<"El numero mayor es el tercero: "<<num3<<endl;
		
	}else{
		cout<<"Los numeros son iguales"<<endl;
	}
	
	
	
	
	return 0;
}

