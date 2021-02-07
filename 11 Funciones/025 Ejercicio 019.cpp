/*Ejercicio 19 reliza un a funcion recursiva que sume los primeros 
enteros n positivos Nota: para plantear la funcion recursiva tenga
en cuenta que la suma puede expresarse mediante la siguiente 
recurrencia

suma(n) = 1 , si n=1
n+suma(n-1) , si n>1
*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int suma(int num);

int main(){
	int num=5;
	num=suma(num);
	cout<<num<<endl;
	
	system("pause");
	return 0;
}

int suma(int num){
	int sum;
	if(num<=1){
		sum=1;
		//return 1;
	}else{
		sum=num+suma(num-1);
		//num+=suma(num-1);
		//return num;
		
	}
	return sum;
	
}

