/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un 
cero. En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores
 mayores que cero leídos.*/
 
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num,contador;
	
	do{
		//leemos los numero que nos da ul usuario 
		cout<<"Inserta un numero: ";cin>>num;
		//si el numero es mayor que cere sumamos 
		if(num>0){
			contador++;
		}
		//mientras el nuemero no sea sero se seguira repitiendo 
	}while(num!=0);
	//mostramos los numeor a cero con el contador 
	cout<<"Los numero ingresador mayores a 0 fueron:  "<<contador<<""<<endl;
	getch();
	return 0;
}
