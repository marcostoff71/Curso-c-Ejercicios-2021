//array c++
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	
	int numeros[]{1,3,4,56};
	
	for(int i=0;i<4;i++){
		cout<<numeros[i];
	}
	
	char letras[4]{'a','b','c','d'};
	
	
	for (int i=0;i<4;i++){
		cout<<letras[i];
	}
	
	
	int numero[5];
	
	numero[0]=12;
	numero[1]=2;
	numero[2]=2;
	numero[3]=44;
	numero[4]=33;
	
	cout<<endl;
	
	for(int i=0;i<5;i++){
		cout<<numero[i]<<endl;
	}
	
	
	getch();
	return 0;
}
