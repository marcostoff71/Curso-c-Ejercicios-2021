/*Ejercicio 12: Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa. 
La estructura debe tener tres campos: horas, minutos y segundos.  
Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas
las etapas.
NOTA: Usar punteros.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct etapa{
	int horas;
	int minutos;
	int segundos;
}etapas[3],*PunEtapas=etapas;
int horas=0,minutos=0,segundos=0;

void pedirDatos();
void calcularTiempo(etapa *);
void mostrarTiempoTotal();
int main(){
	pedirDatos();
	calcularTiempo(PunEtapas);
	mostrarTiempoTotal();
	
	
	
	system("pause");
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		cout<<"Etapa "<<i+1<<endl;
		cout<<"Dame las horas: ";cin>>(PunEtapas+i)->horas;
		cout<<"Dame los minutos: ";cin>>(PunEtapas+i)->minutos;
		cout<<"Dame los segundos: ";cin>>(PunEtapas+i)->segundos;
		cout<<endl;
	}
}
void calcularTiempo(etapa *){
	for(int i=0;i<3;i++){
		
		segundos+=(PunEtapas+1)->segundos;
		if(segundos>=60){
			segundos-=60;
			minutos++;
		}
		minutos+=(PunEtapas+i)->minutos;
		if(minutos>=60){
			minutos-=60;
			horas++;
		}
		horas+=(PunEtapas+i)->horas;
	}
}
void mostrarTiempoTotal(){
	cout<<"\n\tTiempo total"<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<minutos<<endl;
	cout<<"Segundos: "<<segundos<<endl;
}
