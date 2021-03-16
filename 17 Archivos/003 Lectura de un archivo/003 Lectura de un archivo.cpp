#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;

void lectura();

int main(){
	lectura();
	
	
	system("pause");
	return 0;
}

void lectura(){
	ifstream archi;
	string texto="";
	
	archi.open("hola.txt",ios::in);
	if(archi.fail()){
		exit(1);
	}
	
	while(!archi.eof()){//mientras no sea el final del archivo
		getline(archi,texto);
		cout<<texto<<endl;
	}
	archi.close();
	
	
}
