#include <iostream>
#include <stdlib.h>
#include "objeto.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	//creacion de obejto estatico
	Punto p2(1,2);
	cout<<"El valor de x es: "<<p2.getX()<<endl;
	cout<<"El valor de y es: "<<p2.getY()<<endl;
	//creacion objetos
	//objeto de forma dinamica
	Punto* p1 = new Punto(1,2);
	p1->setX(3);
	p1->setY(5);
	cout<<"\nEl valor de x es: "<<p1->getX()<<endl;	
	cout<<"El valor de x es: "<<p1->getY()<<endl;	
	
	
	
	system("pause");
	return 0;
}
