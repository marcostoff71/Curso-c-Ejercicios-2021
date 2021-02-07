//Ordenamiento shell

#include<iostream>
#include<stdlib.h>

using namespace std;
void intercambio(int &a,int &b){
	int aux;
	aux=a;
	a=b;
	b=aux;
	
	
}
void shell(int a[],int n){
	int salto,i,j,k;
	salto=n/2;
	
	while(salto>0){
		for(int i=salto;i<n;i++){
			j=i-salto;
			while(j>=0){
				k=j+salto;
				if(a[j]<=a[k]){
					j-=1;
				}else{
					intercambio(a[j],a[k]);
					j-=salto;
				}
			}
		}
		salto=salto/2;
	}
}

int main(){
	int num[4]{4,3,2,1};
	
	shell(num,4);
	
	for(int i=0;i<4;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
