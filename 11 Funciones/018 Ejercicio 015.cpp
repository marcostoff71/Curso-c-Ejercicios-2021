/*Ejercicio 14: Realiza una función que tome como parámetros un vector de enteros 
y su tamaño e imprima un vector con los elementos impares del vector recibido.
*/
#include<iostream>
#include<stdlib.h>

using namespace std;


int arr[100],elemen;
void pedirDatos();
void imparesArr(int arr[],int tam);
void info(int arr[],int tam);

int main(){
	pedirDatos();
	imparesArr(arr,elemen);
	
	
	
	system("pause");
	return 0;
}


void pedirDatos(){
	//pedimos los datos 
	cout<<"Dame los elementos:";cin>>elemen;
	for(int i=0;i<elemen;i++){
		cout<<i+1<<". Dame el valor: ";
		//asignamos los datos 
		cin>>arr[i];
	}
}
void imparesArr(int arr[],int tam){
	//comprobamos la cantidad de elementos impares para un nuevo array
	int impar=0;
	for(int i=0;i<tam;i++){
		if(!(arr[i]%2==0)){
			//hacemos la suma de los elemntos impares
			impar++;
		}
	}
	//declaramos el array en donde se almacenan los elementos impares
	int impares[impar];
	//rellenamos el array con los elemntos de arr mandado 
	int j=0;
	
	for(int i=0;i<tam;i++){

		if(arr[i]%2!=0){
			//los asignamos 
			impares[j]=arr[i];
			//aumentamos el indice j
			j++;
		}
	}
	//mandamos a llamar la informacion 
	info(impares,impar);
	
	
}
void info(int arr[],int tam){
	cout<<"\n\tArrays de impares"<<endl;
	for(int i=0;i<tam;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
