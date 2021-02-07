//Ejercico 6

/*Escribe una platilla de funcion llamadad maximo() que devuelva el 
valor maximo de tres argmentos que se transmitan a la funcion cuando 
sea llamada suponga que los tres argumentos seran del mismo tipo de
datos*/

#include<iostream>
#include<stdlib.h>
using namespace std;
template<class max>
max numMax(max num1,max num2,max num3);
int main(){
	
	int num1=12,num2=4,num3=4343,numMayor;
	float n1=23.3,n2=5.5,n3=6666.6,nM;
	numMayor=numMax(num1,num2,num3);
	nM=numMax(n1,n2,n3);
	
	cout<<"El mayor numero es el: "<<numMayor<<endl;
	cout<<"El mayor numero es el: "<<nM<<endl;
	
	
	
	
	system("pause");
	return 0;
}


template<class max>
max numMax(max num1,max num2,max num3){
	
	if(num1>num2&&num1>num3){
		//cout<<"El mayor es el numero 1: "<<num1<<endl;
		return num1;
	}else if(num2>num1&&num2>num3){
		//cout<<"El mayor es el numero 2: "<<num2<<endl;
		return num2;
	}else if(num3>num1&&num3>num2){
		//cout<<"El mayor es el numero 3: "<<num3<<endl;
		return num3;
	}//else{
	//	cout<<"Los numeros son iguales"<<endl;
	//}
}

