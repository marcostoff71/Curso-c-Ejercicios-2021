//suma de n numeros con recursividad

#include<stdlib.h>
#include<iostream>
using namespace std;

int sumaNum(int num);
void pedirDatos();
int main(){
	pedirDatos();
	
	system("pause");
	return 0;
}
void pedirDatos(){
	int num;
	cout<<"\tSuma de elementos";
	cout<<"Ingresa el numero: ";
	cin>>num;
	num=sumaNum(num);
	cout<<"La suma de los elemntos es: "<<num<<endl;;
		
}
int sumaNum(int num){
	int resultado;
	if(num<=1){
		resultado=1;
	}else{
		resultado=num+sumaNum(num-1);
	}
	
}
