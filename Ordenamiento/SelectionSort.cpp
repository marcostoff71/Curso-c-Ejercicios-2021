#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	//lenamos el array de datos
	srand(time(NULL));
	int arr[10];
	int num=10;
	for(int i=0;i<10;i++){
		//aleatoriamente
		arr[i]=rand()%51;
		//arr[i]=num;
		//num-=1;
	}
	//mostramos el array
	for(int i=0;i<10;i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	
	
	//Algoritmo de ordenamiento InsertionSort
	
	int iMin;
	for(int i=0;i<10;i++){
		int aux=0;
		iMin=i;
		for(int j=i+1;j<10;j++){
			
			if(arr[j]<arr[iMin]){
				iMin=j;
			}
		}
		aux=arr[i];
		arr[i]=arr[iMin];
		arr[iMin]=aux;
		
	}
	//mostramos el array
	for(int i=0;i<10;i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	return 0;
}
