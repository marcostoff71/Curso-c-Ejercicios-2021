/*
	Transmision de arreglos
	Ejemplo: hallar el maximo elemento de un arreglo
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int mayorNumero(int* arr,int can);

int main(){
	
	int numeros[5]={4,3,2,10,23};
	
	
	int min=mayorNumero(numeros,5);
	
	cout<<"Menor numero :"<<min<<endl;
	system("pause");
	return 0;
}

int mayorNumero(int* arr,int can){
	int min=*(arr+0);
	
	for(int i=0;i<can;i++){
		if(*(arr+i)<min){
			min=arr[i];
		}
	}
	
	return min;
}
