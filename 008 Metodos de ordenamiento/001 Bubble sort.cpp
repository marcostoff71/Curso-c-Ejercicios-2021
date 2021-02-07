//metodo de la burbuja
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	
	int numeros[]{4,3,2,1};
	
	for(int i=1;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(numeros[j]>numeros[j+1]){
				int aux;
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
				
			}
		}
	}

	for(int i=0;i<4;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	
	//algoritmo invertido array
	//esta mal
	int j=3;
	for(int i=0;i<4/2;i++){
		numeros[i]=numeros[j];
		j--;
		
	}

	for(int i=0;i<4;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
