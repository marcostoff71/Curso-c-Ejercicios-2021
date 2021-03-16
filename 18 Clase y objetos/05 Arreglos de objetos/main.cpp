#include <iostream>
#include <stdlib.h>
#include "Alumno.h"

using namespace std;

int main(int argc, char** argv) {
	Alumno alumnos[3];//creacion de un arreglo estaticos
	
	
	Alumno* alumnos2= new Alumno[3];//creacion de un arreglo dinamico
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->pedirDatos();
	}
	
	cout<<"\nMostrando las notas"<<endl;
	for(int i=0;i<3;i++){
		(alumnos2+i)->mostrarNotas();
	}
	
	return 0;
}
