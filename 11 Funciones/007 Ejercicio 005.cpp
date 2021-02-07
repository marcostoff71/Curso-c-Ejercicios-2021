//ejercicio 5
/* Escribe una plantilla de funcion llamada despliegue() que 
despliege el valor dela argumento unico que se le transmite cuadno 
es invocada la funcion*/

#include<iostream>
#include<stdlib.h>
using namespace std;
void pedirDatos();

void despliegue(float n);
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
void despliegue(float n){
	cout<<"\nEl numero ingresado es: "<<n<<endl;
}
