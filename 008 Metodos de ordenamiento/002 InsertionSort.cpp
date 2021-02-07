//Insertion Sort
/*
4,|3,2,1
3,4|,2,1
2,3,4|,1
1,2,3,4|
*/


#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int numeros[]{4,3,2,1};
	
	int postAgujero;
	int dato;
	for(int i=1;i<4;i++){
		postAgujero=i;
		dato=numeros[i];
		while(postAgujero>0&&numeros[postAgujero-1]>dato){
			numeros[postAgujero]=numeros[postAgujero-1];
			postAgujero--;
		}
		
		
		numeros[postAgujero]=dato;
		
	}
	
	
	for(int i=0;i<4;i++){
		cout<<numeros[i]<<" ";
		
	}
	cout<<endl;
	
	
	system("pause");
	return 0;
}

