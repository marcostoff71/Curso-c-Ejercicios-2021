/*Ejercicio 14: En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el n�mero de: 
 a) Alumnos que aprobaron todos los ex�menes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron �nicamente el �ltimo examen.*/
 
 
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int nota1,nota2,nota3;
	int alumTodos,alumUno=0,alumUltimo;
	
	for(int i=1;i<=5;i++){
		cout<<"Alumno: "<<i<<" dame la calificacion del primer examen: ";cin>>nota1;
		cout<<"Alumno: "<<i<<" dame la calificacion del segundo examen: ";cin>>nota2;
		cout<<"Alumno: "<<i<<" dame la calificacion del tercer examen: ";cin>>nota3;
		
		if(nota1>9&&nota2>9&&nota3>9){
			alumTodos++;
		}
		if(nota1>9||nota2>9||nota3>9){
			alumUno++;
		}
		if(nota1<9&&nota2<9&&nota3>=9){
			alumUltimo++;
		}
		cout<<endl;
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<alumTodos<<endl;
 	cout<<"Alumnos que aprobaron al menos un examen: "<<alumUno<<endl;
 	cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<alumUltimo<<endl;
	
	
	
	
	system("pause");
	return 0;
}
