/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int cantidad,*Parray;//declaramos las varibles uno de tipo puntero 
	
	cout<<"Dame la canitidad de elementos del array: ";cin>>cantidad;//pedimso la cantidad de elementos 
	Parray= new int [cantidad];//creamos el array
	
	for(int i=0;i<cantidad;i++){
		*(Parray+i)=rand()%101;//rellenamos el array con numros aleatorios
	}
	int menor=*Parray+0;//incializamos el menor en el indice 0
	
	for(int i=0;i<cantidad;i++){
		if(*(Parray+i)<menor){//si encuentra un numero menor 
			menor=*(Parray+i);//sera asignado el nuevo numero menor
		}
	}
	cout<<"\nEl menor elemento es "<<menor<<endl;//mostramos cual es nuevo numero menor del array
	
	delete[] Parray;//liberamos espacio
	
	system("pause");
	return 0;
}
