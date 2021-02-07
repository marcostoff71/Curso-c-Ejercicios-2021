//Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int cantidad;
	cout<<"Ingresa la cantidad de elementos: ";cin>>cantidad;
	int nums[cantidad],*dirNumeros;	
	//pedimos los datos
	for(int i=0;i<cantidad;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>nums[i];
	}	
	dirNumeros=nums;//creamos el puntero
	
	int menor=9999;
	
	
	for(int i=0;i<cantidad;i++){
		if(*dirNumeros<menor){
			menor=*dirNumeros;
		}
		*dirNumeros++;
	}
	
	cout<<"\nEl menor elemento es: "<<menor<<endl;

	
	system("pause");
	return 0;
}
