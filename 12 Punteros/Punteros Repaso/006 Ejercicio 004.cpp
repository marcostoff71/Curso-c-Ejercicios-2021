#include<iostream>
#include<stdlib.h>
/*
	Ejercicio 4: rellenar un arreglo con n numeros, 
	posteriormente utlizando punteros determinar el menor
	elemneto del vecto
*/
using namespace std;


int main(){
	//declaramos el int num y el puntero 
	int can,*dNum=NULL;
	
	//pedimos la cantidad de elemntos
	cout<<"Ingresa la cantidad de elementos del vector: ";
	cin>>can;
	//asiganmos la cantidad de elementos al array
	int numeros[can];
	
	
	//pedimos los valores del arr 
	for(int i=0;i<can;i++){
		cout<<"Dame el valor de ["<<i<<"] :";
		//cin>>(*dNumeros+i);
		cin>>numeros[i];
	}
	
	dNum=numeros;
	int numMin=*(dNum);
	//Menor cantidad del arr con un ciclo for
	for(int i=0;i<can;i++){
			if(*(dNum+i)<numMin){
				numMin=dNum[i];
			}
	}
	
	
	cout<<"El menor numero es: "<<numMin<<endl;
	
	
	
	
	//mostramos el arr
	
	for(int i=0;i<can;i++){
		cout<<*(dNum+i)<<" "; 
	}
	cout<<endl;
	
	
	system("pause");
	return 0;
}
