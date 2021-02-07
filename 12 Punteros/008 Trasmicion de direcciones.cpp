/* Transmision de direcciones 

Ejejmplo: intercambair el valor de 2 varibles
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

void intercambio(float *,float *);

int main(){
	float num1=20.6,num2=6.78;
	
	cout<<"Valor al inicio"<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;
	
	intercambio(&num1,&num2);
	cout<<"\nValor final"<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;
	
	system("pause");
	return 0;
}

void intercambio(float *dn1,float *dn2){
	float aux;
	aux=*dn1;
	*dn1=*dn2;
	*dn2=aux;

}
