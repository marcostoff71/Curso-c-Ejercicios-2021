#include <iostream>
#include "Cuadrilatero.h"
/*
Construir un programa que calcule el area y el perimetro de un 
cuadrilatero dad la longitud de sus dos lados. los valores
de la longitud deberan introducirse por linea de ordenaes
,si es un cuadrado solo se proporcionara la longitud de uno 
de sus lados al constructor
*/
using namespace std;

int main(int argc, char** argv) {
	Cuadrilatero* c1;
	
	float l1,l2;
	cout<<"Ingresa el lado 1: ";cin>>l1;
	cout<<"Ingresa el lado 2: ";cin>>l2;
	
	
	if(l1==l2){
		c1= new Cuadrilatero(l1);
	}else{
		c1=new Cuadrilatero(l1,l2);
	}
	
	float area,peri;
	
	area=c1->obternerArea();
	peri=c1->obtenerPerimetro();
	
	
	cout<<"El area es: "<<area<<endl;
	cout<<"El perimetro es: "<<peri<<endl;
	
	return 0;
}
