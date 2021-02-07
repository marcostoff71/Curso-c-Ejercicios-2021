/*Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando punteros 
indicar cuales son números pares y su posicion en memoria. */

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void pedirDatos();
void llenar();
void paresImpares(int *array,int can);

int *Parray, cantidad;

int main(){
	pedirDatos();
	llenar();
	paresImpares(Parray,cantidad);
	delete[] Parray;
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Dame la cantidad de elementos: ";cin>>cantidad;
	Parray= new int [cantidad];
}
void llenar(){
	srand(time(NULL));
	
	for(int i=0;i<cantidad;i++){
		*(Parray+i)=rand()%51;
	}
	
}
void paresImpares(int *array,int can){
	for(int i=0;i<can;i++){
		if((*(array+i)%2)==0){
			cout<<"El numero "<<*(array+i)<<" es par"<<endl;
			cout<<"Posicion en memoria: "<<array+i<<endl;
		}else{
			cout<<"El numero "<<*(array+i)<<" es impar"<<endl;
			cout<<"Posicion en memoria: "<<array+i<<endl;
		}
	}
}

