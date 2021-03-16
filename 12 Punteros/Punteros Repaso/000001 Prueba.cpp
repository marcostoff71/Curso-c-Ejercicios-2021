#include<iostream>
#include<stdlib.h>


using namespace std;

void intercambiarRef(int &a,int &b);
void intercambiarPunt(int *a,int *b);

int main(){
	int a,b,*ap,*bp;
	a=1;
	b=2;
	
	ap=&a;
	bp=&b;
	cout<<"Valores antes de intercambiar";
	cout<<" a:"<<a<<" b:"<<b<<endl;
	
	//intercambiarRef(a,b);
	intercambiarPunt(ap,bp);
	
	cout<<"Valores despues de intercambiar";
	cout<<" a:"<<a<<" b:"<<b<<endl;
	
	
	system("pause");
	return 0;
}
void intercambiarRef(int &a,int &b){
	int aux;
	aux=a;
	a=b;
	b=aux;
}
void intercambiarPunt(int* a,int* b){
	int aux;
	//intercambiar los valores de las varibles
	
	aux=*a;
	*a=*b;
	*b=aux;
}
