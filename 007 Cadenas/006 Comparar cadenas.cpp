//comparar cadenas - funcion strcmp()


#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[]="hola";
	char palabra2[]="Hola";
	
	//0 igual 
	//1 distintos 
	if(strcmp(palabra1,palabra2)==0){
		cout<<"amabas cadenas son igual "<<endl;
	}else{
		cout<<"las cadenas son diferente"<<endl;
	}
	
	
	system("pause");
	return 0;
}
