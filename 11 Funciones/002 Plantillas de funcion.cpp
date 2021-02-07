//platillas de funcion

//ejmplo sacar el valor absoluto de un numero 
#include<iostream>
#include<stdlib.h>
using namespace std;

template <class TipoD>
void mostrarAlb(TipoD);

int main(){
	float num;
	
	cout<<"Dame un numero: ";
	cin>>num;
	
	mostrarAlb(num);
	
	system("pause");
	return 0;
}


template <class TipoD>
void mostrarAlb(TipoD numero){
	
	if(numero<0){
		numero=numero*-1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
