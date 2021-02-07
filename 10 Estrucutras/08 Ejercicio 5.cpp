/*Ejercicio 5: Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad;
hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno
,luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
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
}alu1;
int main(){
	int promedio;
	//pedimos los datos
	cout<<"Dame el nombre: ";cin.getline(alu1.nombre,20,'\n');
	cout<<"Ingresa el sexo: ";cin.getline(alu1.sexo,20,'\n');
	cout<<"Ingresa la edad: ";cin>>alu1.edad;
	cout<<"Dame la nota 1: ";cin>>alu1.promAlumno.nota1;
	cout<<"Dame la nota 2: ";cin>>alu1.promAlumno.nota2;
	cout<<"Dame la nota 4: ";cin>>alu1.promAlumno.nota3;
	//calculamos el promedio 
	
	
	promedio =(alu1.promAlumno.nota1+alu1.promAlumno.nota2+alu1.promAlumno.nota3)/3;

	//mostramos la informacion
	cout<<"Nombre: "<<alu1.nombre<<endl;
	cout<<"Sexo: "<<alu1.sexo<<endl;
	cout<<"Edad: "<<alu1.edad<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	
	
	
	
	system("pause");
	return 0;
}
