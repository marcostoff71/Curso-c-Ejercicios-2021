/*Ejercicio 10 
Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro
 entero que represente el número total de días desde la fecha 1/1/2000 y
  parámetros de referencia nombrados año, mes y día. La función es calcular
   el año, mes y día actual para el número dado de días que se le transmitan
   . Usando las referencias, la función deberá alterar en forma directa los
    argumentos respectivos en la función que llama. Para este problema
	 suponga que cada año tiene 365 días y cada mes tiene 30 días.*/
#include<iostream>
#include<stdlib.h>

using namespace std;
void calcAnios(int numTo,int& anios,int& mes,int&dias);
int main(){
	int totalDias,anios,mes,dias;
	cout<<"Dame el total de dias despues de 1/1/2000: ";cin>>totalDias;
	
	calcAnios(totalDias,anios,mes,dias);
	cout<<endl<<dias<<"/"<<mes<<"/"<<anios+2000<<endl;
	
	system("pause");
	return 0;
}
void calcAnios(int numTo,int& anios,int& mes,int&dias){
	
	anios=numTo/365;
	numTo%=365;
	mes=numTo/30;
	numTo%=30;
	dias=numTo;
	
}
