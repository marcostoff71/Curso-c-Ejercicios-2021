#include<iostream>
#include<stdlib.h>

//tranmision de direcciones 
//Ejemplo intercambiar el valor de 2 varibles 


using namespace std;

void intercambiarRef(int& a,int& b);
void intercambiarPunt(int* a,int* b);
int main(){
	int a,b;
	a=1;
	b=2;
	cout<<"Valor de a: "<<a<<" valor de b: "<<b<<endl;
	
	intercambiarPunt(&a,&b);
	
	cout<<"Valor despues del intercambio de a: "<<a<<" valor de b: "<<b<<endl;
	system("pause");
	return 0;
}


void intercambiarRef(int& a,int& b){
	int aux;
	
	aux=a;
	a=b;
	b=aux;
}
void intercambiarPunt(int* a,int* b){
	int aux;
	
	aux=*a;
	*a=*b;
	*b=aux;
}
