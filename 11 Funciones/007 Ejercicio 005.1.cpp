//ejercicio 5
/* Escribe una plantilla de funcion llamada despliegue() que 
despliege el valor dela argumento unico que se le transmite cuadno 
es invocada la funcion*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
template <class dato>
void despliegue(dato d);
float num;
int main(){
	pedirDatos();
	despliegue(num);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Dame un numero: ";
	cin>>num;
}
template <class dato>
void despliegue(dato d){
	cout<<"\nEl numero ingresado es: "<<d<<endl;
}
