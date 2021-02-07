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
		num-=1;
	}
	//mostramos el array
	for(int i=0;i<10;i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	
	
	//Algoritmo de ordenamiento InsertionSort
	
	int postAgujero;
	for(int i=1;i<10;i++){
		
		postAgujero=i;
		while(postAgujero>0&&arr[postAgujero-1]>arr[postAgujero]){
			int aux;
			aux=arr[postAgujero];
			arr[postAgujero]=arr[postAgujero-1];
			arr[postAgujero-1]=aux;
			
			postAgujero--;
		}	
	}
	//mostramos el array
	for(int i=0;i<10;i++){
		cout<<"["<<arr[i]<<"]";
	}
	cout<<endl;
	return 0;
}
