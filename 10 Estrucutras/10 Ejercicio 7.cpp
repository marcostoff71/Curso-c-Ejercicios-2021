/*Ejercicio 7: Defina una estructura que indique el tiempo empleado por un ciclista en una etapa.
 La estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n 
 etapas calcule el tiempo total empleado en correr todas las etapas.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;


struct Tiempo{
	int horas;
	int minutos;
	int segundos;
};
int main(){
	int etapas,horasT=0,minutosT=0,segundosT=0;
	cout<<"Dame las etapas: ";cin>>etapas;
	
	struct Tiempo tiempos[etapas];
	
	for(int i=0;i<etapas;i++){
		cout<<"\tEtapa-->"<<i+1<<endl;
		cout<<"Horas: ";cin>>tiempos[i].horas;
		cout<<"Minutos: ";cin>>tiempos[i].minutos;
		cout<<"Segundo: ";cin>>tiempos[i].segundos;
		
		segundosT+=tiempos[i].segundos;
		if(segundosT>=60){
			segundosT-=60;
			minutosT++;
		}
		minutosT+=tiempos[i].minutos;
		if(minutosT>=60){
			minutosT-=60;
			horasT++;
		}
		horasT+=tiempos[i].horas;
	}
	
	
	cout<<"\n\tTotal horas"<<endl;
	cout<<horasT<<":"<<minutosT<<":"<<segundosT<<endl;
	

	system("pause");
	return 0;
}
