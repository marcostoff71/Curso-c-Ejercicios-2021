/* comprobar si el numero por el usuario es positivo o netgativo*/
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Digita un numero: ";cin>>num;
	if(num>0){
		cout<<"El numero: "<<num<<" es positivo"<<endl;
	}else if(num<0){
		cout<<"El numero: "<<num<<" es negativo"<<endl;
	}else{
	    cout<<"El numero: "<<num<<" es nulo"<<endl;
	}
	
	
	return 0;
}
