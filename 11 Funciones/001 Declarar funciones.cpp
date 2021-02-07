//Funciones

#include<iostream>
#include<stdlib.h>

using namespace std;

//tipo nombre(argumento){
//codigo
//}

//prototopi de la funcion
int numMayor(int num1,int num2);

int main(){
	int n1,n2,numMayor1;
	cout<<"Dame el primer numero: ";cin>>n1;
	cout<<"Dame el segundo numero: ";cin>>n2;
	
	numMayor1=numMayor(n1,n2);
	
	cout<<"El numero mayor es: "<<numMayor<<endl;
	system("pause");
	return 0;
}

int numMayor(int num1,int num2){
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
}


