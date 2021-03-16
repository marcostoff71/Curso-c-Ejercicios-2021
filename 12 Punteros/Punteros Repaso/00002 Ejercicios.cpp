#include<iostream>
#include<stdlib.h>
//Menor y mayor numero de un array mas suma y promedio 

using namespace std;

int* arr,can;

void menuArr();
void mayorArr(int* ,int);
void menorArr(int* ,int);
void sumaArr(int* ,int);
void promedioArr(int*,int);
void mostrarArr(int* ,int);

int main(){
	system("color 0b");
	menuArr();
	
	system("pause");
	return 0;
}
void menuArr(){
	int op;
	do{
		//munu
		cout<<"1. Llenar array"<<endl;
		cout<<"2. Mayor numero de un array"<<endl;
		cout<<"3. Menor elemnto de un array"<<endl;
		cout<<"4. Suma del array"<<endl;
		cout<<"5. Premedio del arr"<<endl;
		cout<<"6, Mostrar arr"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Escogue una opcion: ";cin>>op;
		
		switch(op){
			case 1:
				//opcion 1
				//creamos el arr
				cout<<"Dame la cantidad de elemntos: ";cin>>can;
				arr= new int[can];
				for(int i=0;i<can;i++){
					cout<<"Dame el valor de ["<<i<<"]: ";
					cin>>*(arr+i);
				}
				break;
				case 2:
					//opcion 2 mayor elemento de un arr
					mayorArr(arr,can);
					break;
					case 3:
						menorArr(arr,can);
						break;
						case 4:
							sumaArr(arr,can);
							break;
							case 5:
								promedioArr(arr,can);
								break;
								case 6:
									mostrarArr(arr,can);
									break;
						
		}
		system("pause");
		system("cls");
	}while(op!=7);
}
void mayorArr(int* arr,int can){
	int mayor=*(arr);
	for(int i=0;i<can;i++){
		//comprobamos el numero menor
		if(*(arr+i)>mayor){
			mayor=*(arr+i);
		}
	}
	
	cout<<"\nEl mayor numero es: "<<mayor<<endl;
}
void menorArr(int* arr,int can){
	int min=*(arr);
	for(int i=0;i<can;i++){
		//comprobamos el numero menor
		if(*(arr+i)<min){
			min=*(arr+i);
		}
	}
	
	cout<<"\nEl menor numero es: "<<min<<endl;
}
void sumaArr(int* arr,int can){
	int sum=0;
	
	for(int i=0;i<can;i++){
		sum+=*(arr+i);
	}
	
	cout<<"\nLa suma de todos los elementos de arr es: "<<sum<<endl;
}
void promedioArr(int* arr,int can){
	int sum,prom;
	for(int i=0;i<can;i++){
		sum+=*(arr+i);
	}
	prom=sum/can;
	
	cout<<"\El promedio es: "<<prom<<endl;
}
void mostrarArr(int* arr,int can){
	for(int i=0;i<can;i++){
		if(i==can-1){
			cout<<*(arr+i)<<endl;
		}
		else{
			cout<<*(arr+i)<<" ";
		}
	}
}
