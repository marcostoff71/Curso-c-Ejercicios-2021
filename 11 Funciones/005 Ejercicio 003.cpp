//ejercicio 3
/* Escribe una funcion nombrada funpot() que eleve un numero entero 
que se le transmita a una potencia en numero postivio y despliege el
resultado, El numero entero postivo debera ser el segunfo valor 
transmitido a la funcion*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

void PedirDatos();
void NumPotencia(float num,int potencia);
float numero;
int potencia;

int main(){
	PedirDatos();
	NumPotencia(numero,potencia);
	
	system("pause");
	return 0;
}


void PedirDatos(){
	cout<<"Dame el numero: ";cin>>numero;
	cout<<"Dame la potencia: ";cin>>potencia;
}
void NumPotencia(float n,int p){
	float resultado=1;
	for(int i=0;i<p;i++){
		resultado*=p;
	}
	//resultado=pow(n,p);
	cout<<"\nEl resultado de "<<n<<"^"<<p<<" = "<<resultado<<endl;
}

