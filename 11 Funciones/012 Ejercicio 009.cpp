/*Ejercicio 9
Escriba una funcion nombrada timepo() que tenga de parametro un numero
entero llamando total segundos y tres parametros de referencia 
enteros nombrados horas minutps segundo, la funcion es convertir 
el numero de segundos transmitos en numeros equivaltentes de horas
minutos y segundos;
*/
#include<iostream>
#include<stdlib.h>
void tiempo(int totalSegun,int& horas,int& minutos,int&segundos);
using namespace std;
int main(){
	int totalSeg,horas=0,minutos=0,segundos=0;
	
	cout<<"ingresa los segundos totales: ";
	cin>>totalSeg;
	tiempo(totalSeg,horas,minutos,segundos);
	
	cout<<endl<<totalSeg<<">>Equivale A"<<endl;
	cout<<horas<<" Horas"<<endl;
	cout<<minutos<<" Minutos"<<endl;
	cout<<segundos<<" segundos"<<endl;
	system("pause");
	return 0;
}

void tiempo(int totalSegun,int& horas,int& minutos,int&segundos){
	horas=totalSegun/3600;
	totalSegun%=3600;
	minutos=totalSegun/60;
	totalSegun%=60;
	segundos=totalSegun%60;
}
