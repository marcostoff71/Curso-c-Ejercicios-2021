/*Trasnmicion de arreglos

Ejemplo hallar el maximo elemnto de un arreglo */

#include<iostream>
#include<stdlib.h>

using namespace std;
int hallarMax(int*,int);

int main(){
	const int nElementos=5;
	int numeros[nElementos]={3,2,1,4,5};
	
	cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos)<<endl;;
	
	system("pause");
	return 0;
}

int hallarMax(int *dirArreglo,int cantidad){
	int max=0;
	
	for(int i=0;i<cantidad;i++){
		if(*(dirArreglo+i)>max){
			max=*(dirArreglo+i);
		}
		//*dirArreglo++;
	}
	
	return max;
	
}
