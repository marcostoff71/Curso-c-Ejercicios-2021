/*Ejercicio 12: Realice una funci�n que tome como par�metros 
un vector y su tama�o y  diga si el vector est� ordenado 
crecientemente. Sugerencia: compruebe que para todas las 
posiciones del vector, salvo para la 0, el elemento del
 vector es mayor o igual que el elemento que le precede en
  el vector.*/
#include<iostream>
#include<stdlib.h>

using namespace std;

void pedirDatos();
bool arrOrdenado(int arr[],int tam) ;
void info(bool orde);
int main(){
	pedirDatos();
	
	system("pause");
	return 0;
}


void pedirDatos(){
	int elementos;
	cout<<"Dame la cantidad de elmentos de vector: ";
	cin>>elementos;
	//delcaramos el array con la cantidad de elementos dados
	int num[elementos];
	for(int i=0;i<elementos;i++){
		cout<<i+1<<". Dame el valor: ";
		cin>>num[i];
	}
	//llamamos al metodo para averiguar si esta ordenado o no
	bool ordenado;
	ordenado=arrOrdenado(num,elementos);
	//mostramos la informacion 
	info(ordenado);
	
}
bool arrOrdenado(int arr[],int tam){
	bool ordenado=true;
	int i=0;
	while(ordenado==true&&i<tam-1){
		if(arr[i]>arr[i+1]){
			ordenado=false;
		}
		i++;
	}
	return ordenado;
}
void info(bool orde){
	if(orde==true){
		cout<<"El array esta ordenado ascendentemente"<<endl;
	}else{
		cout<<"El array no esta ordenado ascendetemente"<<endl;
	}
}
