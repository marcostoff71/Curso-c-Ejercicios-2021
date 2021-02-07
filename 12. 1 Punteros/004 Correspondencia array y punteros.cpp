//coresspondecia ente array y punteros

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int *Pnumeros;
	
	Pnumeros=numeros;
	
	for(int i=0;i<5;i++){
		cout<<*(Pnumeros+i)<<" ";
		cout<<(Pnumeros+1)<<" ";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
