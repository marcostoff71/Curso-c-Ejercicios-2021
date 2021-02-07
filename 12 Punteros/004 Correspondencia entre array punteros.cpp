//Correspondencia entre array y punteros

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int *dirNumeros;
	
	dirNumeros= numeros;
	
	
	for(int i=0;i<5;i++){
		cout<<*dirNumeros++<<endl;
	}
	cout<<dirNumeros<<endl;
	
	system("pause");
	return 0;
}
