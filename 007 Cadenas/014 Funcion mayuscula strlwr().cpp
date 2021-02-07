//funcion una palabra a minusculas - funcion strlwr()

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	
	char palabra[]="MARCO";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	system("pause");
	return 0;
}
