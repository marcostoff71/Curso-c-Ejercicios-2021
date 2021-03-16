#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"


using namespace std;

int main(int argc, char** argv) {
	
	//sobrevarga de metodos en c++
	Persona* p1 = new Persona(); 
	Persona* p2 = new Persona(23); 
	Persona* p3 = new Persona("as"); 
	Persona* p5 = new Persona("a",4); 
	Persona* p4 = new Persona("pep",23,"sa"); 
	
	
	return 0;
}
