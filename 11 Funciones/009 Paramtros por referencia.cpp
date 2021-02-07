//paso de parametros por referencia 

#include<iostream>
#include<stdlib.h>

using namespace std;
void valNueva(int& n1,int& n2);

int main(){
	int num1,num2;
	
	cout<<"Dame el primer numero: ";cin>>num1;
	cout<<"Dame el segundo numero: ";cin>>num2;
	valNueva(num1,num2);
	
	
	
	cout<<"El valor de primer numero es:"<<num1<<endl;
	cout<<"El valor del segundo numero es: "<<num2<<endl;
	
	system("pause");
	return 0;
}

void valNueva(int& n1,int& n2){
	cout<<"El valor de primer numero es:"<<n1<<endl;
	cout<<"El valor del segundo numero es: "<<n2<<endl;
	n1=99;
	n2=12;
}
