/*Ejercicio 8
Escribe una funcion nombrada cmabio() que tenga un parametro en numero
enter y seos parametrsos de referncia en numero entero nombradps
cien,cincuenta,veinte,diez,cinco y uno , respectivamente,
la funcion tienee que considerar el valor entero transmitido como 
una cantidad en dolares y converit rel valor en el numero de 
billeltes equivalentes */
#include<iostream>
#include<stdlib.h>

using namespace std;
void cambio(int entero,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno);
int main(){
	int valor,cien,cincuenta,veinte,diez,cinco,uno;
	cout<<"Digite la cantidad de dolares: ";
	cin>>valor;
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	
	
	cout<<"Cantidad de billetes a entregar como cambio:"<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	
	system("pause");
	return 0;
}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien=valor/100;
	valor%=100;
	cincuenta=valor/50;
	valor%=50;
	veinte =valor/20;
	valor%=20;
	diez=valor/10;
	valor%=10;
	cinco=valor/5;
	uno=valor%5;
}

