/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, 
posteriormente en otra función buscar un número en particular. 
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)*/ 

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
//prototipo de funciones 
void pedirDatos();
void buscar(int*array,int cantidad);
//declaramos las variables
int *arrayPun,can;

int main(){
	pedirDatos();
	buscar(arrayPun,can);
	
	system("pause");
	return 0;
}
void pedirDatos(){
	//pedimos la cantidad de elementos
	cout<<"Dame la cantidad de elementos: ";cin>>can;
	arrayPun = new int [can];//declaramos el array dinamcico 
	
	//pedimos los datos
	srand(time(NULL));
	
	for(int i=0;i<can;i++){
		*(arrayPun+i)=rand()%101;
	}
}
void buscar(int*array,int cantidad){
	int bus,*indiB,cont=0,j=0;
	cout<<"Dame el elemento a buscar: ";cin>>bus;
	indiB= new int[cantidad];
	
	
	for(int i=0;i<cantidad;i++){
		if(*(array+i)==bus){
			cont++;
			*(indiB+j)=i;
			j++;
		}
	}
	if(cont<=0){
		cout<<"\nEl numero "<<bus<<" no se encontro "<<endl;
	}else{
	cout<<"\nEl numero "<<bus<<" se encontro "<<cont<<" veces en las posiciones :"<<endl;
	
	for(int i=0;i<cont;i++){
		cout<<*(indiB+i)<<" ";
	}
	cout<<"\n";
	}
}
