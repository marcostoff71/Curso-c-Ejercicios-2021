//estructuras anidadas

#include<iostream>
#include<stdlib.h>

using namespace std;

struct infoDireccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct infoDireccion dirEmpleado;
	double salario;
}empleados[2];

int main(){
	for(int i=0;i<2;i++){
		//baffer lleno
		//fflush(stdin); 
		//pedimos el nombre
		cout<<"Digite tu nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Dame tu direccion: ";
		cin.getline(empleados[i].dirEmpleado.direccion,20,'\n');
		cout<<"Dame tu ciudad: ";
		cin.getline(empleados[i].dirEmpleado.ciudad,20,'\n');
		cout<<"Dame tu provincia: ";
		cin.getline(empleados[i].dirEmpleado.provincia,20,'\n');
		cout<<"Dame tu salario: ";
		cin>>empleados[i].salario;
		cout<<"\n";
		//cin.ignore();//otra forma es con cin.ignore limpia el baffer
		
	}
	
	//imprimos losdato
	
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion :"<<empleados[i].dirEmpleado.direccion<<endl;
		cout<<"Ciuddad: "<<empleados[i].dirEmpleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dirEmpleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
	}
	
	system("pause");
	return 0;
}


