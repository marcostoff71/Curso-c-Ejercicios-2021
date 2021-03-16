#include<iostream>
#include<stdlib.h>


using namespace std;

//numero par impar con punteros
int main(){
	
	int num,*numP;
	cout<<"Digita un numero: ";cin>>num;
	numP=&num;
	if(*numP%2==0){
		cout<<"El numero "<<*numP<<" es par";
		cout<<" posicion de memoria: "<<numP<<endl;
	}else{
		cout<<"El numero "<<*numP<<" es impar";
		cout<<" posicion de memoria: "<<numP<<endl;
	}
	
	
	system("pause");
	return 0;
}
