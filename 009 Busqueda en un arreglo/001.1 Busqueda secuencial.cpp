//Busqueda secuencial

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int numeros[]{6,5,4,4,1};
	
	int dato=4,i=0;
	bool encontrado=false;
	
	while(i<5){
		if(numeros[i]==dato){
			encontrado=true;
			if(encontrado){
		cout<<"Se a encontrado el dato"<<endl;
		cout<<"Se a eccontrado el dato en la posicion "<<i<<endl;
		}
		}else{
			encontrado=false;
		}
		i++;	
	}
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
