//factorial de un numero con recursividad

#include<iostream>
#include<stdlib.h>

using namespace std;
void pedirDatos();
void factorial();//sin recursiviad
int facRe(int num);
int main(){
	//factorial();
	pedirDatos();
	
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	int num;
	cout<<"Factorial de un numero"<<endl;
	cout<<"Ingresa el numero: ";cin>>num;
	num=facRe(num);
	cout<<"El resultado es "<<num<<endl;
}
int facRe(int num){
	int resultado;
	if(num<=1){
		resultado=1;
	}else{
		resultado=num*facRe(num-1);
	}
	
	return resultado;
	
}
void factorial(){
	cout<<"\tFactorial de un numero"<<endl;
	int num,fac=1;
	cout<<"Ingresa el numero: ";cin>>num;
	for(int i=num;i>=1;i--){
		fac*=i;
	}
	
	
	
	cout<<"El factorial es: "<<fac<<endl;
}

