/*Ejercicio 13: Realiza una función que tome como parámetros un 
vector de números y su tamaño y cambie el signo de los elementos 
del vector.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
//varibles publicas 
int arr[100],tam;
void pedirDatos();
void cambioSigno(int num[],int tam);
void infor(int num[],int tam);

int main(){
	pedirDatos();
	cambioSigno(arr,tam);
	infor(arr,tam);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Dame el tamaño del array: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>arr[i];
	}
}
void cambioSigno(int num[],int tam){
	for(int i=0;i<tam;i++){
		num[i]*=-1;
		//if(num[i]>0){
		//	num[i]=num[i]*-1;
		//}else{
		//	num[i]=num[i]*1;
		//}
	}
}
void infor(int num[],int tam){
	cout<<"Nuevo arreglo"<<endl;
	for(int i=0;i<tam;i++){
	cout<<num[i]<<" ";	
	}
	cout<<endl;
}

