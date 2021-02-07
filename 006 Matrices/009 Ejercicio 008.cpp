//Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int numero1[3][3];
	int numero2[3][3];
	int multi[3][3];
	int sum=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Dame el valor de ["<<i<<"] ["<<j<<"]: ";
			cin>>numero1[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Dame el valor de ["<<i<<"] ["<<j<<"]: ";
			cin>>numero2[i][j];
		}
	}
	
	//multiplicacion matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			multi[i][j]=0;
			for(int k=0;k<3;j++){
				multi[i][j]+=numero1[i][k]*numero2[k][j];
			}	
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<multi[i][j]<<" ";
				
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
