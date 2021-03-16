#include"diaAnio.h"
#include<iostream>
using namespace std;

void DiaAnio::visualizar(){
	cout<<"Dia: "<<dia<<endl;
	cout<<"Mes: "<<mes<<endl;
}
bool DiaAnio::iguar(DiaAnio* comp){
	bool valor=false;
	if(dia==comp->getDia()&&mes==comp->getMes()){
		valor=true;
	}
	return valor;
}
int DiaAnio::getDia(){
	return dia;
}
int DiaAnio::getMes(){
	return mes;
}
