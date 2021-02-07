//paso de parametros de tipo vector 
//parametro de la funcioon
//void nombre(tipo arra[].int tamanño//
//ladad de la 


#include<iostream>
#include<stdlib.h>
using namespace std;
void cuadrado(int vec[],int tam);
void muestra(int vec[],int tam);

int main(){
	const int tam=5;
	
	int num[tam]={1,2,3,4,5,};
	cuadrado(num,tam);
	muestra(num,tam);
	
	
	
	system("pause");
	return 0;
}

void cuadrado(int vec[],int tam){
	
	for(int i=0;i<tam;i++){
		vec[i]=vec[i]*vec[i];
	}
	
}

void muestra(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}
