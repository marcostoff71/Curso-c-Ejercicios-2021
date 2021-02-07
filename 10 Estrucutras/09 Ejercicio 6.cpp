/*Ejercicio 6: Utilizar las 2 estructuras del problema 5, pero ahora pedir los
 datos para N alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.
 */
 
#include<iostream>
#include<stdlib.h>
using namespace std;

struct promedio{
	float nota1,nota2,nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio promAlumno;//estructura anidada
};

int main(){
	int canAlum;
	//pedimos la cantidad de alumno
	cout<<"Dame la cantidad de alumnos: ";cin>>canAlum;
	//creamos la estructuta con los numeros de alumnos
	struct alumno alumnos[canAlum];
	
	//promedio 
	int posAlum;
	float promedio, mayorPromedio=0;
	for(int i=0;i<canAlum;i++){
		
		fflush(stdin);
		cout<<"\tAlumno: "<<i+1<<endl;
		cout<<"Nombre: ";cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Sexo: ";cin.getline(alumnos[i].sexo,20,'\n');
		cout<<"Edad: ";cin>>alumnos[i].edad;
		cout<<"\tCalificaciones"<<endl;
		cout<<"Nota 1: ";cin>>alumnos[i].promAlumno.nota1;
		cout<<"Nota 2: ";cin>>alumnos[i].promAlumno.nota2;
		cout<<"Nota 3: ";cin>>alumnos[i].promAlumno.nota3;
		
		//caclulamos el promedio 
		promedio=(alumnos[i].promAlumno.nota1+alumnos[i].promAlumno.nota2+alumnos[i].promAlumno.nota3)/3;
		//calculamos el mayor promedio 
		if(promedio>mayorPromedio){
			mayorPromedio=promedio;
			posAlum=i;
		}
	}
	
	cout<<"t/Alumno con mayor promedio es el alumno: "<<posAlum+1<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Nombre: "<<alumnos[posAlum].nombre<<endl;
	cout<<"Sexo: "<<alumnos[posAlum].sexo<<endl;
	cout<<"Edad: "<<alumnos[posAlum].edad<<endl;
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
