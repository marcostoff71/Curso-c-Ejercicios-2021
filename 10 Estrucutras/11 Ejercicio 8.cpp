/*Ejercicio 8: Defina una estructura que sirva para representar a una persona.
 La estructura debe contener dos campos: el nombre de la persona y un valor de tipo lógico
  que indica si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector 
  de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna discapacidad 
  y otro que contenga las personas con discapacidad.*/
  
  
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct persona{
	char nombre[20];
	bool discapcidad;
};

int main(){
	int numPer,j=0,k=0;
	cout<<"Dame el numero de personas: ";cin>>numPer;
	
	struct persona personas[numPer],personasDis[numPer],personasSinDis[numPer];
	
	for(int i=0;i<numPer;i++){
		fflush(stdin);
		cout<<"Nombre: ";cin.getline(personas[i].nombre,20,'\n');
		cout<<"Discapacidad: (1/0) 1==si||0==NO: ";cin>>personas[i].discapcidad;
		
		if(personas[i].discapcidad){
			strcpy(personasDis[j].nombre,personas[i].nombre);
			j++;
		}else{
			strcpy(personasSinDis[k].nombre,personas[i].nombre);
			k++;
		}
		
	}
	
	//mostramos las personas con discapacidad
	cout<<"\n";
	cout<<"\tPersonas con discapacidad"<<endl;
	
	for(int i=0;i<j;i++){
		
		cout<<"Nombre: "<<personasDis[i].nombre<<endl;
	}
	cout<<"\tPersonas Sin discpacidad"<<endl;
	for(int i=0;i<k;i++){
		
		cout<<"Nombre: "<<personasSinDis[i].nombre<<endl;
	}
	system("pause");
	return 0;
}
