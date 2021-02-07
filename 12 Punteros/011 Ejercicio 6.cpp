/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número en particular. 
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

//vaurbles 
int cantidad,*numeros;
//prototipos de fucniones 
void pedirDatos();
void buscar(int*, int);
int main(){
	pedirDatos();
	buscar(numeros,cantidad);
	delete [] numeros;
	
	
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"Dame la cantidad de elementos: ";
	cin>>cantidad;
	numeros= new int[cantidad];
	
	for(int i=0;i<cantidad;i++){
		cout<<"Dame el elemento ["<<i+1<<"]: ";
		cin>>numeros[i];
	}
}
void buscar(int* nums, int can){
	int buscar,cont=0,pos[can];
	cout<<"\nDame el numero a buscar: ";cin>>buscar;
	int j=0;
	for(int i=0;i<can;i++){
		if(buscar==*(nums+i)){
			cont++;
			pos[j]=i;
			j++;
		}
	}
	
	if(cont==0){
		cout<<"\nNo se encontro ningun elemento igual a ->"<<buscar<<endl;
	}else if(cont==1){
		cout<<"\nEl elemento "<<buscar<<" se encuentra "<<cont<<" vez"<<endl;
		cout<<"Se encuentra en la posicion "<<pos[0]+1<<endl;
	}else{
		cout<<"\nEl elemento "<<buscar<<" se encuentra "<<cont<<" veces"<<endl;
		cout<<"Se encuentran en las posiciones: ";
		for(int i=0;i<cont;i++){
			cout<<pos[i]+1<<" ";
		}
		cout<<endl;
	}
	
}

