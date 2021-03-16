#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[]={4,3,2,1};
	
	for(int i=1;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(numeros[j]>numeros[j+1]){
				int aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	cout<<"[";
	for(int i=0;i<4;i++){
		if(i!=3){
			cout<<numeros[i]<<",";
		}else{
			cout<<numeros[i];
		}
	}
	cout<<"]"<<endl;
	
	
	
	system("puase");
	return 0;
}
