#include<iostream>
#include<stdlib.h>

/*
	Ejericico 5. Pedir un arry dinamico y ordenarlo ascendemente
	new, delete
*/


using namespace std;

//varibles globales
int* arr ,can;

//prototipos de funciones
void pedirDatos(int* ,int*);
void bubbleSort(int* ,int);
void insertionSort1(int*, int);
void insertionSort2(int*, int);
void selectionSort(int*, int);
void mostrarArr(int*,int);

int main(){
	int op;
	
	do{
		cout<<"1. Rellenar arr"<<endl;
		cout<<"2. Bubble sort"<<endl;
		cout<<"3. Insertion sort1"<<endl;
		cout<<"4. Insertion sort2"<<endl;
		cout<<"5. Mostrar arr"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Escogue una opcion: ";
		cin>>op;
		
		if(op==1){
			pedirDatos(arr,&can);
		}else if(op==2){
			
		}else if(op==3){
			
		}else if(op==4){
			
		}else if(op==5){
			mostrarArr(arr,can);
		}
		
		
		
		
		
		
	}while(op!=6);
	
	system("puase");
	return 0;
}


//funciones
void pedirDatos(int* arr,int* can){
	cout<<"Dame la cantidad de elemntos: ";cin>>*can;
	arr= new int[*can];
	for(int i=0;i<*can;i++){
		cout<<"Dame el valor de ["<<i<<"]: ";
		cin>>*(arr+i);
	}
}
void bubbleSort(int* arr,int can){
	
}
void insertionSort1(int* arr, int can){
	
}
void insertionSort2(int* arr, int can){
	
}
void selectionSort(int* arr, int can){
	
}
void mostrarArr(int* arr,int can){
	for(int i=0;i<can;i++){
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;
}
