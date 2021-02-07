/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura 
exterior, leyéndola durante un período de 24 horas. Es decir, debe leer 
6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/
#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	float temperatura,mayor=0,menor=999;
	float sumaTemperatura=0,promedio;
	
	//hacemos el bucle de 24 horas empezando de 0
	//hcaemos un aumento de 4 que son las horas en las que pediremos el clima
	
	for(int i=0;i<24;i+=4){
	
		//pedimos la termperatura cada cuatro horas y la mostramos	
		cout<<"Ingresa la temperatura de la hora "<<i<<" :";
		cin>>temperatura;
		//sumamos la temperatura para sacar su promedio 
		sumaTemperatura+=temperatura;
		
		//calculadmos la termperatura mayor
		if(temperatura>mayor){
			mayor=temperatura;
		}
		//calculamos la temperatura menor 
		if(temperatura<menor){
			menor=temperatura;
		}
	}
	//scamos el promedio con la suma de temperatura
	//dividiente entre 6
	promedio=sumaTemperatura/6;
	
	//mostramos la media que es el promedio 
	//la temperatura menor y la mayor 
	cout<<"\nLa temperatura media del dia es: "<<promedio<<"°c"<<endl;
	cout<<"La menor temperatura fue: "<<menor<<"°c"<<endl;
	cout<<"La mayor temperatura fue: "<<mayor<<"°c"<<endl;
	
	//pedimos que den un click para cerrar
	getch();
	return 0;
}
