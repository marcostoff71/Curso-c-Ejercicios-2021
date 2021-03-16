#include <iostream>
#include <stdlib.h>
#include "Estudiante.h"

using namespace std;
//clases compuestas

int main(int argc, char** argv) {
	Estudiante* e1 = new Estudiante("2323",10.0,23,"Luis");
	e1->mostrarDatos();
	
	
	
	system("pause");
	return 0;
}
