#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num[]={4,3,2,1};
	
	int dato,pos;
	for(int i=0;i<4;i++){
		dato=num[i];
		pos=i;
		
		while(pos>0&&num[pos-1]>dato){
			num[pos]=num[pos-1];
			pos--;
		}
		num[pos]=dato;
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
