#include<iostream>
#include<stdlib.h>

using namespace std;


void quickSort(int arr[],int primero,int ultimo){
	int pivote,i,j;
	
	pivote=arr[(primero+ultimo)/2];
	
	do{
		while(arr[i]<pivote)i++;
		while(arr[j]>pivote)j--;
		if(i<=j){
			int aux;
			aux=arr[i];
			arr[i]=arr[j];
			arr[j]=aux;
			i++;
			j--;
		}
		
		
	}while(i<=j);
	
	if(primero<j)quickSort(arr,primero,i);
	if(i<ultimo)quickSort(arr,i,ultimo);
	
}

int main(){
	
	
	system("pause");
	return 0;
}
