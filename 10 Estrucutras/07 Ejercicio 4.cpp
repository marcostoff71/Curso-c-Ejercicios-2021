/*Ejercicio 4: Hacer un arreglo de estructura llamada atleta
para N atletas que contenga los siguientes campos:
nombre, país, numero_medallas. y devuelva los datos (Nombre, país)
del atleta que ha ganado el mayor número de medallas.*/
#include<iostream>
#include<stdlib.h>

using namespace std;
struct atleta{
	char nombre[20];
	char pais[20];
	int numMedallas;
};
int main(){
	int cantidadAtle;
	cout<<"Dame la cantidad de atletas: ";cin>>cantidadAtle;
	//declaramos la estructura 
	struct atleta atletas[cantidadAtle];
	//pedimos los datos
	int mayorM=0,pos;
	
	for(int i=0;i<cantidadAtle;i++){
		fflush(stdin);//liberamos buffer
		cout<<"\nAtleta: "<<i+1<<endl;
		cout<<"Nombre: ";cin.getline(atletas[i].nombre,20,'\n');
		cout<<"Pais: ";cin.getline(atletas[i].pais,20,'\n');
		cout<<"Numero de medallas: ";cin>>atletas[i].numMedallas;
		
		if(atletas[i].numMedallas>mayorM){
			mayorM=atletas[i].numMedallas;
			pos=i;
		}
	}
	cout<<"\tAtleta con mayor numero de medallas"<<endl;
	cout<<"Atleta: "<<pos+1<<endl;
	cout<<"Nombre: "<<atletas[pos].nombre<<endl;
	cout<<"Pais: "<<atletas[pos].pais<<endl;
	cout<<"Numero de medallas: "<<atletas[pos].numMedallas<<endl;
	
	system("pause");
	return 0;
}

