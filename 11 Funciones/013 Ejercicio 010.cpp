/*Ejercicio 10 
Ejercicio 10: Escriba una funci�n nombrada calc_a�os() que tenga un par�metro
 entero que represente el n�mero total de d�as desde la fecha 1/1/2000 y
  par�metros de referencia nombrados a�o, mes y d�a. La funci�n es calcular
   el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan
   . Usando las referencias, la funci�n deber� alterar en forma directa los
    argumentos respectivos en la funci�n que llama. Para este problema
	 suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.*/
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
