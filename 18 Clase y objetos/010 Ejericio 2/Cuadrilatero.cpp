#include "Cuadrilatero.h"

void Cuadrilatero::Cuadrilatero(float l1){
	this->base=l1;
	this->altura=l1;
}
void Cuadrilatero::Cuadrilatero(float l1,float l2){
	this->base=l1;
	this->altura=l2;
}
float Cuadrilatero::obtenerPerimetro(){
	double peri;
	peri=2*(altura*base);
	return peri;
}
float Cuadrilatero::obternerArea(){
	double area=(altura*base);
	return area;
}
