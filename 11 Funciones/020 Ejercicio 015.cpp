//Ejercicio 15: Desarrollar una función que determine si una matriz es simétrica o no.
#include<iostream>
#include<stdlib.h>

using namespace std;


int filas,colum;
int matriz[100][100];

void pedirInfo();
void matrizSime(int sime[][100],int fi,int co);

int main(){
	pedirInfo();
	matrizSime(matriz,filas,colum);
	
	system("pause");
	return 0;
	
}
void pedirInfo(){
	cout<<"Dame las filas de la matriz: ";cin>>filas;
	cout<<"Dame las columas de la matriz: ";cin>>colum;
	
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			cout<<i+1<<"."<<j+1<<".-Dame el valor: ";
			cin>>matriz[i][j];
		}
		cout<<endl;
	}
}

void matrizSime(int sime[][100],int fi,int co){
	
	
	int valor=0;
	if(fi==co){
		for(int i=0;i<fi;i++){
			for(int j=0;j<co;j++){
				if(sime[i][j]==sime[j][i]){
					valor++;
				}
			}
		}
	}
	
	if(valor==fi*co){
		cout<<"La matriz es simetrica"<<endl;
	}else{
		cout<<"La matriz no es simetrica"<<endl;
	}
}
