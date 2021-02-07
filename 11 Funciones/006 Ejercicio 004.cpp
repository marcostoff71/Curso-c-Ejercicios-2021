//Ejercicio 4

/*Escribe un programa en c+++ que devuelva la parte fraccionaria de 
cualquier numero introducido por el usuario por ejemplo, si se le 
introduce el numero 256.879, deberia desplegar se el numero 0.879*/
#include<iostream>
#include<stdlib.h>
using namespace std;
void PedirDatos();
void partFracc(float n);
float numero;

int main(){
	PedirDatos();
	partFracc(numero);
	
	
	
	system("pause");
	return 0;
}


void PedirDatos(){
	cout<<"Dame un numero con .:";
	cin>>numero;
}
void partFracc(float n){
	int entero=n;
	n-=entero;
	
	cout<<n<<endl;
}
