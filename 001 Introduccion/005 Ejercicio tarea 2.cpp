/*Ejercicio 2: Escribe un programa que lea de la entrada 
estándar el precio de un producto y muestre en la salida estándar el 
precio del producto al aplicarle el IVA.*/
//programa que pida la el precio y le aumente el iva
#include<iostream>
using namespace std;
int main (){
	float precio,iva,precioFinal;
	
	cout<<"Dame el precio del producto: ";cin>>precio;
	cout<<"Dame el iva del preducto: ";cin>>iva;
	precioFinal=precio+((precio*iva)/100);
	
	cout<<"El precio final es "<<precioFinal;
	
	return 0;
}
