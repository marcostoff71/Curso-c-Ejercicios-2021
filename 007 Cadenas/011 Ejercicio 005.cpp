/*Ejercico 5 Hcaer un programa que determine si una palabra es polindroma*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30];
	char palabra2[30];
	cout<<"Ingresa la palabra para saber si es polindroma: ";
	cin.getline(palabra1,30,'\n');
	
	strcpy(palabra2,palabra1);
	strrev(palabra2);
	if(strcmp(palabra1,palabra2)==0){
		cout<<"La palabra es polindorma"<<endl;
	}else{
		cout<<"La palabra no es polindroma"<<endl;
	}
	
	system("pause");
	return 0;
}
