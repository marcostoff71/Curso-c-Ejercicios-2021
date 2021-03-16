#include "operaciones.h"
#include <iostream>
#include <stdlib.h>

int Operaciones::cont=0;

int Operaciones::getCont(){
	return cont;
}

int Operaciones::multi(int n1,int n2){
	return n1*n2;
}
int Operaciones::division(int n1,int n2){
	return n1/n2;
}
int Operaciones::resta(int n1,int n2){
	return n1-n2;
}
int Operaciones::suma(int n1,int n2){
	return n1+n2;
}
