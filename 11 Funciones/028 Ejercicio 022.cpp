/*Ejercicio 22: Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva 
en la salida est�ndar los n�meros del ini al fin. Escriba una versi�n que escriba 
los n�meros en orden ascendente.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int escribeNumeros(int ini,int fin);

int main(){
	int ini,fin;
	cout<<"Dame el inicio: ";cin>>ini;
	cout<<"Dame el final: ";cin>>fin;
	
	for(int i=ini;i<=fin;i++){
		cout<<escribeNumeros(i,fin)<<endl;
	}
	
	system("pause");
	return 0;
}

int escribeNumeros(int ini,int fin){
	if(ini==fin){
		return ini;
	}else{
		return escribeNumeros(ini,fin-1);
	}
}
