/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico 
posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla. 
NOTA: Utilizar cualquier método de ordenamiento.*/
#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void selectionSort(int*num,int elem);
void mostrar(int*);
int cantidad, *numeros;

int main(){
	pedirDatos();
	mostrar(numeros);
	selectionSort(numeros,cantidad);
	mostrar(numeros);
	delete [] numeros;
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Dame la cantidad de elementos: ";
	cin>>cantidad;
	numeros= new int[cantidad];
	
	for(int i=0;i<cantidad;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>numeros[i];
	}
	
}

void selectionSort(int*num,int elem){
	int imin;
	for(int i=0;i<elem;i++){
		imin=i;
		for(int j=i+1;j<elem;j++){
			if(num[j]<num[imin]){
				imin=j;
			}
		}
		int aux;
		aux=num[i];
		num[i]=num[imin];
		num[imin]=aux;
	}
}


void mostrar(int *num){
	
	cout<<"\tMuestra de arreglo"<<endl;
	for(int i=0;i<cantidad;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
}
