#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	//insertion sort
	int num[]={4,3,2,1};
	
	int imin;
	
	for(int i=0;i<4;i++){
		imin=i;
		for(int j=i+1;j<4;j++){
			if(num[j]<num[imin]){
				imin=j;
			}
		}
		int aux;
		aux=num[i];
		num[i]=num[imin];
		num[imin]=aux;
	}
	
	cout<<"[";
	for(int i=0;i<4;i++){
		if(i!=3){
			cout<<num[i]<<",";
		}else{
			cout<<num[i];
		}
	}
	cout<<"]"<<endl;
	
	
	system("pause");
	return 0;
}
