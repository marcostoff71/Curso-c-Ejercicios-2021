//Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.

#include<iostream>
#include<stdlib.h>

using namespace std;
int ** matriz1,**matriz2,**matriz3;
int filas=0,colum=0;

void pedirDatos();
void mostrar(int ** matriz,int fi,int co);
int main(){
	pedirDatos();
	cout<<"\nSuma de las matrices"<<endl;
	mostrar(matriz3,filas,colum);
	
	//liberamos la memoria columasn
	for(int i=0;i<filas;i++){
		delete[] matriz1[i];
		delete[] matriz2[i];
		delete[] matriz3[i];
	}
	//filas
	delete[] matriz1;
	delete[] matriz2;
	delete[] matriz3;
	
	system("pause");
	return 0;
}
void pedirDatos(){
	//pedimos las filas y las columnas
	cout<<"Dame las filas: ";cin>>filas;
	cout<<"Dame las columnas: ";cin>>colum;
	
	//declaramos las 3 matrices dinamicas uwu
	matriz1 = new int *[filas];
	matriz2 = new int *[filas];
	matriz3 = new int *[filas];
	for(int i=0;i<filas;i++){
		matriz1[i]=new int [colum];
		matriz2[i]= new int [colum];
		matriz3[i]=new int [colum];
	}
	
	//pedimos los datos 
	cout<<"\nPrimera matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
		cout<<"Dame el valor de ["<<i+1<<"]["<<j+1<<"]: ";
		cin>>*(*(matriz1+i)+j);
		}
	}
	
	//pedimos los datos de la sugunda matriz
	cout<<"\nSegunda matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			cout<<"Dame el valor de ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>*(*(matriz2+i)+j);
		}
	}
	
	//hacemos la suma de las dos matrices 
	for(int i=0;i<filas;i++){
		for(int j=0;j<colum;j++){
			*(*(matriz3+i)+j)=*(*(matriz1+i)+j)+*(*(matriz2+i)+j);
		}
	}
		
}

void mostrar(int ** matriz,int fi,int co){
	
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			cout<<"Valor ["<<i+1<<"]["<<j+1<<"]: "<<*(*(matriz+i)+j)<<endl;		
		}
		
	}
	for(int i=0;i<fi;i++){
		for(int j=0;j<co;j++){
			cout<<*(*(matriz+i)+j)<<" ";		
		}
		cout<<endl;
	}
}
