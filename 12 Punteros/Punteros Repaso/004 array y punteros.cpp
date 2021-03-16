#include<iostream>
#include<stdlib.h>


using namespace std;


int main(){
	
	int numeros[] = {1,2,3,4,5,6};
	
	int *dnumeros;
	
	//dnumeros=&numeros[0];
	
	dnumeros=numeros;
	
	for(int i=0;i<6;i++){
		cout<<*dnumeros+i<<endl;
		cout<<"Elemento del ventor ["<<i<<"]: ";
		cout<<*dnumeros+i<<endl;
	}
	
	system("pause");
	return 0;
}
