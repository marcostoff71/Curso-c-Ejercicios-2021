//paso de parametro tipo matriz

//elevar al cuadrado todos los elemtnos de una matriz

#include<iostream>
#include<stdlib.h>
using namespace std;

void mostrarMatriz(int matriz[][3],int fi,int co );
void cuadradoMatriz(int matriz[][3],int fi,int co );

int main(){
	const int filas=2;
	const int colum=3;
	
	int m[filas][colum]={{2,3,3},{4,5,6}};
	
	mostrarMatriz(m,filas,colum);
	cout<<"Matriz elevada al cuadrado "<<endl;
	cuadradoMatriz(m,filas,colum);
	mostrarMatriz(m,filas,colum);
	system("pause");
	return 0;
}
void mostrarMatriz(int matriz[][3],int fi,int co ){
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

void cuadradoMatriz(int matriz[][3],int fi,int co ){
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			matriz[i][j]*=matriz[i][j];
		}
	}
}
