/* Ejercicio 17: suma de numeros complejos 
z1=5-3i    ,z2=-4+2{
z1 +z2	=(5-4i)+(-4+2)
		=5-3i-4+2i
		=1-i
		*/
#include<iostream>
#include<stdlib.h>


using namespace std;

struct Complejo{
	float real,imaginaria;
	
}z1,z2;
//protoipo de la funcion 
void pedirDatos();
Complejo suma(Complejo,Complejo);
void muestra(Complejo x);

int main(){
	pedirDatos();
	Complejo x=suma(z1,z2);
	muestra(x);
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Dame los datos para el primer numero complejo: "<<endl;
	cout<<"Parte real: ";cin>>z1.real;
	cout<<"Parte imaginaria: ";cin>>z1.imaginaria;
	
	
	cout<<"Dame los datos para el segundo numero complejo"<<endl;
	cout<<"Parte real: ";cin>>z2.real;
	cout<<"Dame la parte imaginaria: ";cin>>z2.imaginaria;
	
	
}

Complejo suma(Complejo z1 ,Complejo z2){
	z1.real+=z2.real;
	z1.imaginaria+=z2.imaginaria;
	
	return z1;
}

void muestra(Complejo x){
	cout<<"Resultado de la suma "<<x.real<<" "<<x.imaginaria<<endl;
}
