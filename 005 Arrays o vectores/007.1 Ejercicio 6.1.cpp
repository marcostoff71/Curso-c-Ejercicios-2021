//Ejercicio 6: Escribe un programa que defina un vector de 
//números y calcule si existe algún número en el vector cuyo valor
//equivale a la suma del resto de números del vector.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int cantidad,mayor,suma=0;
	
	cout<<"Dame la cantidad de elementos del vector: ";
	cin>>cantidad;
	
	int numeros[cantidad];
	
	//pedimos los datos al usuario
	for(int i=0;i<cantidad;i++){
		cout<<"Dame el elemento "<<i+1<<" : ";cin>>numeros[i];
	}
	
	//comprobarmos la suma de los numero y el numero mayor
	for(int i=0;i<cantidad;i++){
		suma+=numeros[i];
		
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	
	if(mayor=suma-mayor){
		cout<<"Exite un numero que es la suma de los demas y es: "<<mayor<<endl;
		
	}else{
		cout<<"No existe un numero mayor que la suma de los demas"<<endl;
	}
	
	system("pause");
	return 0;
}
