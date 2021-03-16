#include<iostream>
#include<stdlib.h>
//quicksort


using namespace std;

void quickSort(int arr[],int primero,int ultimo){
	int i,j,cental;
	int pivote;
	
	cental=(primero+ultimo)/2;
	pivote=arr[cental];
	i=primero;
	j=ultimo;
	
	
	do{
		
		while(arr[i]<pivote){
			i++;
		}
		while(arr[j]>pivote){
			j--;
		}
		
		if(i<=j){
			int aux;
			aux=arr[i];
			arr[i]=arr[j];
			arr[j]=aux;
			i++;
			j--;
		}
		
	}while(i<=j);
	
	
	if(primero<j){
		quickSort(arr,primero,j);//ordenamos la sublista izquiera
		
	}
	if(i<ultimo){
		quickSort(arr,i,ultimo);//ordenamos la sublista derecha
	}
}

int main(){
	
	int arr[]={4,5,6,3,2,1};
	quickSort(arr,0,5);
	
	
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
