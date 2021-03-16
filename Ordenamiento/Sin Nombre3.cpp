#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num[]={4,3,2,1};
	
	int pos;
	for(int i=0;i<4;i++){
		
		pos=i;
		
		while(pos>0&&num[pos-1]>num[pos]){
			int aux;
			aux=num[pos];
			num[pos]=num[pos-1];
			num[pos-1]=aux;
			pos--;
		}
		
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
	system("puase");
	return 0;
}
