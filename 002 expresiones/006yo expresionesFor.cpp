/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos 
y calcule la nota final media de los cuatro alumnos.
*/
#include<iostream>
using namespace std;
int main(){
	int alumnos;
	cout<<"Dame los alumnos: ";cin>>alumnos;
	
	float notas[alumnos];
	float suma=0,promedio=0;
	
	for(int i=0;i<alumnos;i++){
		cout<<"Dame la calificacion del alumno "<<i+1<<": ";
		cin>>notas[i];
		suma+=notas[i];
	}
	
	
	promedio=suma/alumnos;
	cout<<"El promedio de las calificacion es: "<<promedio<<endl;
	
	
}
