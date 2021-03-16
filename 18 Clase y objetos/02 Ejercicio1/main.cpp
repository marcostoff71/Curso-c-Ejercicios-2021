#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	DiaAnio* hoy;
	DiaAnio* cumple;
	int dia,mes;
	cout<<"Dame el dia de hoy: ";cin>>dia;
	cout<<"Dame el mes de hoy: ";cin>>mes;
	hoy= new DiaAnio(dia,mes);
	
	cout<<"\nIntroduce el dia de tu cumpleaños: ";cin>>dia;
	cout<<"Introduce el mes de tu cumpleaños: ";cin>>mes;
	cumple= new DiaAnio(dia,mes);
	
	//mostramos la fecha de hoy
	cout<<endl;
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	
	if(hoy->igual(*cumple)){
		cout<<"\nHoy es tu cumpleaños"<<endl;
	}else{
		cout<<"\nHoy no es tu cumpleaños"<<endl;
	}
	
	return 0;
}
