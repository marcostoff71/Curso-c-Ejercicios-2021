//Ejercicio 4: Escribe un programa que defina un vector de n�meros y 
//muestre en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento.


#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	
	int elementos;
	
	do{
	cout<<"Dame el numero de elementos: ";
	cin>>elementos;
	}while(elementos<1);
	
	
	int numeros[elementos];
	
	
	for(int i=0;i<elementos;i++){
		cout<<"Dame el elemento "<<i+1<<" : ";
		cin>>numeros[i];
	}
	
	for(int i=elementos-1;i>=0;i--){
		cout<<"Forma del ultimo al primero: "<<numeros[i]<<endl;
	}
	
	
	
	
	getch();
	return 0;
}
