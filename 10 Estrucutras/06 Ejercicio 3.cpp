/*Ejercicio 3: Realizar un programa que lea un arreglo de estructuras los 
datos de N empleados de la empresa y que imprima los datos del empleado con 
mayor y menor salario.*/
#include<iostream>
#include<stdlib.h>
using namespace std;


struct empleado{
	char nombre[20];
	float salario;
};
int main(){	
	//pedimos la cantidad de emplados 
	int canEmpleados,salMenor=999,salMayor=0;
	int posMenor,posMayor;
	
	do{	
	cout<<"Dame la cantidad de empleados: ";cin>>canEmpleados;
	}while(canEmpleados<2);
	//La asignameos a la estructura
	struct empleado empleados[canEmpleados];
		
	//pedimos los datos 
	for(int i=0;i<canEmpleados;i++){
		fflush(stdin);//limpiamos el buffer
		cout<<"\nEmpleado: "<<i+1<<endl;
		cout<<"Nombre: ";cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Salario: ";cin>>empleados[i].salario;
		
		//comprobamos menor y mayor salario 
		if(empleados[i].salario>salMayor){
			salMayor=empleados[i].salario;
			posMayor=i;
		}
		if(empleados[i].salario<salMenor){
			salMenor=empleados[i].salario;
			posMenor=i;
		}
	}
	
	//empleado con mayor
	cout<<"\nEmpleado con mayor salario :"<<posMayor+1<<endl;
	cout<<"Nombre: "<<empleados[posMayor].nombre<<endl;
	cout<<"Salario: "<<empleados[posMayor].salario<<endl;
	
	//empleado 
	cout<<"\nEmepleado con menor salario: "<<posMenor+1<<endl;
	cout<<"Nombre: "<<empleados[posMenor].nombre<<endl;
	cout<<"Salario: "<<empleados[posMenor].salario<<endl;
	
	system("pause");
	return 0;
}
