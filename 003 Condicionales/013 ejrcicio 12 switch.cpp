//12 hacer un menu con las siguientes opciones 
//1 cubo de un numero 
//2 numero par o impar
//3 salir

#include<iostream>
#include<math.h>
using namespace std;


int main(){
	int opcion;
	float num,cubo;
	int num1;
	do{
		num=0;
		cubo=0;
		num1=0;
		cout<<"1. Cubo de un numero"<<endl;
		cout<<"2. Numero par o impar"<<endl;
		cout<<"3. Salir"<<endl;
		do{//validamos que la opcion conicida con el menu
		cout<<"Escogue una opcion: ";cin>>opcion;
		}while(opcion<1||opcion>3);
		
		switch(opcion){
			case 1:
				cout<<"Ingresa el numero: ";cin>>num;
				cubo=pow(num,3);//elevamos el numero por el usario al cubo
				cout<<"El numero elevado al cubo es: "<<cubo<<endl;
				break;
			case 2:
				
				cout<<"Ingresa el numero: ";cin>>num1;
				if(num1%2==0){
					cout<<"El numero: "<<num1<<" es par"<<endl; 
				}else{
					cout<<"El numero: "<<num1<<" es impar"<<endl;
				}
				break;		 
		}
		
		
		
	}while(opcion!=3);
	
	
	
	
	return 0;
}
