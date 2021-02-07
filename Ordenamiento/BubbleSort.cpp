#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int arr[10];
	int num=1;
	for(int i=0;i<10;i++){
		
		arr[i]=rand()%51;
		num+=1;
	}
	
	
	//mostramos el array
	
	for(int i=0;i<10;i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	
	
	//Algoritmo de ordenamiento 
	
	for(int i=1;i<10;i++){
		for(int j=0;j<10-i;j++){
			
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
		//mostramos el array
	
	for(int i=0;i<10;i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	
	
	
	return 0;
}
