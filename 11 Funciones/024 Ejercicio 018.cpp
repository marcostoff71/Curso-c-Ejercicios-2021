/*Ejercicio 18: Escriba una función en C++ llamada mayor()
 que devuelva la fecha más reciente de cualquier par de fechas
  que se le transmitan. Por ejemplo, si se transmiten las fechas
   10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha. 
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct fecha{
	int dia,mes,anio;
}f1,f2;

void pedirDatos();
fecha mayorFe(fecha fe1,fecha fe2);
void mostrarFeMayor(fecha mayor);


int main(){
	
	pedirDatos();
	//estructra mayor
	fecha mayor;
	mayor=mayorFe(f1,f2);
	mostrarFeMayor(mayor);
	
	
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Primera fecha"<<endl;
	do{
	cout<<"Dame el dia: ";cin>>f1.dia;
	}while(f1.dia<0||f1.dia>30);
	do{
	cout<<"Dame el mes: ";cin>>f1.mes;
	}while(f1.mes<0||f1.mes>12);
	do{
	cout<<"Dame el anio: ";cin>>f1.anio;
	}while(f1.anio<0);
	
	cout<<"Segunda fecha"<<endl;
	do{
	cout<<"Dame el dia: ";cin>>f2.dia;
	}while(f2.dia<0||f2.dia>30);
	do{
	cout<<"Dame el mes: ";cin>>f2.mes;
	}while(f2.mes<0||f2.mes>12);
	do{
	cout<<"Dame el anio: ";cin>>f2.anio;
	}while(f2.anio<0);
	
}

fecha mayorFe(fecha fe1,fecha fe2){
	fecha mayor;
	
	if(f1.dia>f2.dia&&f1.mes>f2.mes&&f1.anio>f2.anio){
		mayor=f1;
	}else{
		mayor=f2;
	}
	
	return mayor;
	
}
void mostrarFeMayor(fecha mayor){
	cout<<"La fecha mayor es"<<endl;
	cout<<mayor.dia<<"/"<<mayor.mes<<"/"<<mayor.anio<<ednl;;
}
