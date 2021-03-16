//visibilidad de los miembros de una clase
#include <iostream>
#include "Punto.h"
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//creacion de objetos
	//crear un objeto de forma estatica
	Punto p1(1,3);
	
	
	p1.setX(23);
	cout<<"El valor de x es: "<<p1.getX()<<endl;
	cout<<"El valor de y es: "<<p1.getY()<<endl;
	
	
	
	
	//crear objeto de forma dinamica
	Punto* p2 = new Punto();
	int n;
	cout<<"Dame el valor de x: ";cin>>n;
	p2->setX(n);
	cout<<"Dame el valor de y: ";cin>>n;
	p2->setY(n);
	
	cout<<"El valor de x es: "<<p2->getX()<<endl;
	cout<<"El valor de y es: "<<p2->getY()<<endl;
	
	return 0;
}
