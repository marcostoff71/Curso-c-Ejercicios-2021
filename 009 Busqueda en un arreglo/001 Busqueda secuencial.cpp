//Busqueda secuencial

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int numeros[]{6,5,4,4,1};
	
	int dato=4;
	int contador;
	
	for(int i=0;i<5;i++){
		if(numeros[i]==dato){
			contador++;
		}
	}
	
	if(contador>0){
		if(contador==1){
			cout<<"El dato se encuentra "<<contador<<" vez"<<endl;
		}else{
			cout<<"El dato se encuentra "<<contador<<" veces"<<endl;
		}
	}
	
	
	
	
	
	
	system("pause");
	return 0;
}
