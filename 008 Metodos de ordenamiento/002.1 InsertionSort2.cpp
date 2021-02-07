//selection Sort

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numeros[]{4,3,2,1};
	
	int postAgujero,aux;
	
	for(int i=1;i<4;i++){
		postAgujero=i;
		
		while(postAgujero>0&&numeros[postAgujero-1]>numeros[postAgujero]){
			aux=numeros[postAgujero];
			numeros[postAgujero]=numeros[postAgujero-1];
			numeros[postAgujero-1]=aux;
			
			postAgujero--;
		}
	}
	
	for(int i=0;i<4;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	
	system("pause");
	return 0;
}
