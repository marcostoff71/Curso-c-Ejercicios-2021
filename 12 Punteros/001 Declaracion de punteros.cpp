/*Punteros - declaracion de punteros

&n = direeccion de n
*n = la variable cuya direccion esta almacenada en n

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num,*dir_num;
	cout<<"Dame el numero: ";cin>>num;
	
	dir_num=&num;
	
	cout<<"Direccion de memoria: "<<dir_num<<endl;
	cout<<"Contenido de memoria: "<<*dir_num<<endl;
	
	
	getch();
	return 0;
}
