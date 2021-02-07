//SelecionSort

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int numeros[]{4,3,2,1};
	
	int imin,aux;
	
	for(int i=0;i<4;i++){
		imin=i;
		for(int j=i+1;j<4;j++){
			if(numeros[j]<numeros[imin]){
				imin=j;
			}
		}
		
		aux=numeros[i];
		numeros[i]=numeros[imin];
		numeros[imin]=aux;
		
	}
	
	for(int i=0;i<4;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	
	
	
	
	system("pause");
	return 0;
}
