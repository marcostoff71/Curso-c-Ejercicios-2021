/*Ejercicio 7: La calificaci�n final de un estudiante es la media ponderada de 
tres notas: la nota de pr�cticas que cuenta un 30% del total, la nota te�rica
 que cuenta un 60% y la nota de participaci�n que cuenta el 10% restante. 
 Escriba un programa que lea de la entrada est�ndar las tres notas de un 
 alumno y escriba en la salida est�ndar su nota final.*/
 
 #include<iostream>
 
 using namespace std;
 
 int main(){
 	float practica;
 	float teorica;
 	float participacion;
 	float final;
 	
 	
 	cout<<"Digital la nota practica: ";cin>>practica;
 	cout<<"Digitla la nota teorica: ";cin>>teorica;
 	cout<<"Digita la participacion: ";cin>>participacion;
 	
 	practica =(practica*30)/100;
 	teorica=(teorica*60)/100;
 	participacion = (participacion*10)/100;
 	
 	//practica *=0.3;
 	//teorica*=0.6;
 	//participacion *=0.1;
 	
 	final=practica+teorica+participacion;
 	cout<<"La calificacion final es: "<<final<<endl;
 	return 0;
 	
 }
 
