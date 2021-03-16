#include <iostream>
#include "Perrito.h"
#include <stdlib.h>

using namespace std;


int main(int argc, char** argv) {
	
	Perro p1("pep","luis");
	p1.mostrarDatos();
	p1.juugar();
	
	Perro* p2 = new Perro();
	p2->mostrarDatos();
	p2->juugar();
	delete p2;
	
	
	return 0;
}
