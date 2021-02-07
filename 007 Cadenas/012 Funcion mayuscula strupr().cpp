//Pasar una palabra mayuscula funcion strupr()

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main(){
	char nombre[]="marco";
	
	strupr(nombre);
	
	cout<<nombre<<endl;
	system("pause");
	return 0;
}
