#include <iostream>
#include<stdlib.h>
#include"DiaAnio.h"
/*
Ejercicio 1 : Definir una lcase diaAnio con los atributos mes y dia,
 �ps metodos igua() y visualizar. el mes se registrra como valor entero
 (1, enero ,2 febrero) 
 el dia del mes se registrara en otra varible entera 
 esrcibir un programa que compruebe si es la fecha de cumplea�os
*/

using namespace std;


int main(int argc, char** argv) {
	int dia,mes;
	cout<<"Ingresa el dia de hoy: ";cin>>dia;
	cout<<"Ingresa el mes actual: ">cin>>mes;
	DiaAnio* fechaA= new DiaAnio(dia,mes);
	
	cout<<"\nIngresa el dia de tu cumplea�os: ";cin>>dia;
	cout<<"Ingresa el mes de tu cumplea�os: ";cin>>mes;
	DiaAnio* cumple = new DiaAnio(dia,mes); 	
	
	fechaA->visualizar();
	cumple->visualizar();
	
	if(fechaA->iguar(cumple)){
		cout<<"Felicidades"<<endl;
	}else{
		cout<<"No es tu cumplea�os"<<endl;
	}
	
	return 0;
}
