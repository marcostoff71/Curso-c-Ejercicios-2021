#include <iostream>
#include<stdlib.h>
#include "Punto.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	//de forma estatica se accece con operador .
	int x,y;
	Punto p1(1,2);
	cout<<"Dame el valor de x estatico: ";
	cin>>x;
	p1.setX(x);
	cout<<"Dame el valor de y estatico: ";
	cin>>y;
	p1.setY(y);
	
	
	cout<<"\nEl valor de la clase estatica es: ";
	cout<<"x: "<<p1.getX()<<" y: "<<p1.getY()<<endl;
	
	//de forma dinamica
	Punto* p2 = new Punto();
	cout<<"Dame el valor de x dinamico: ";
	cin>>x;
	cout<<"Dame el valor de y dinamico: ";
	cin>>y;
	p2->setX(x);
	p2->setY(y);
	
	
	cout<<"El valor de la clase dinamica es: ";
	cout<<"x: "<<p2->getX()<<" y: "<<p2->getY()<<endl;
	
	
	return 0;
}
