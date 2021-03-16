#include<iostream>
#include<stdlib.h>
#include<time.h>
/*
	Ejercicio 3: Rellenar un array de 10 numeros , 
	posteriormente utlizando punteros indicar cuales son 
	numeros pares y su poscion de memoria
*/

using namespace std;

int main(){
	srand(time(NULL));
	int num[10],*dNum;;
	for(int i=0;i<10;i++){
		//num[i]=rand()%51;
		cout<<"Dame un numero: ";
		cin>>num[i];
	}
	dNum=num;
	for(int i=0;i<10;i++){
		
		cout<<dNum[i]<<endl;
		
		if((dNum[i])%2==0){
			cout<<"Numero par: "<<dNum[i];
			cout<<" direccion de memoria: "<<dNum+i<<endl;
		}else{
			cout<<"Numero impar: "<<dNum[i];
			cout<<" direccion de memoria: "<<dNum+i<<endl;
		}
		if(i==10-1){
			cout<<endl;
		}
	}
	
	system("pause");
	return 0;
}
