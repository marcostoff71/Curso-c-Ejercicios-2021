//Quicksort

#include<iostream>
#include<stdlib.h>

using namespace std;
void Intercambio(int &a,int&b){
	int aux;
	aux=a;
	a=b;
	b=aux;
	
}
void QuickSort(int arr[],int primero,int ultimo){
	int i,j,central;
	int pivote;
	
	central=(primero+ultimo/2);
	pivote=arr[central];
	
	i=primero;
	j=ultimo;
	
	do{
		while(arr[i]<pivote)i++;
		while(arr[j]>pivote)j--;
		
		if(i<=j){
			Intercambio(arr[i],arr[j]);
			i++;
			j--;
		}
	}while(i<=j);
	
	if(primero<j){
		QuickSort(arr,primero,j);//ordenamos la sublista izquierda
		
	}
	if(i<ultimo){
		QuickSort(arr,i,ultimo);
	}
	
}
int main(){
	int num[]{4,3,2,1};
	
	QuickSort(num,0,3);
	
	for(int i =0;i<4;i++){
		cout<<num[i]<<" ";
	}
	
	cout<<endl;
	
	
}
