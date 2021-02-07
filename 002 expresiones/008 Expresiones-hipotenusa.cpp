//Ejercicio 8: Escriba un programa que lea de la entrada estándar
 //los dos catetos de un triángulo rectángulo y escriba en la salida 
 //estándar su hipotenusa.
 
 #include<iostream>
 #include<math.h>
 using namespace std;

int main (){
	
	float cate1,cate2,hipotenusa;
	cout<<"Dame el primer cateto del triangulo: ";cin>>cate1;
	cout<<"Dame el segundo cateto del triangulo: ">cin>>cate2;
	
	hipotenusa=sqrt (pow(cate1,2)+pow(cate2,2));
	
	cout<<"La hipotenusa es: "<<hipotenusa;
	
	
	
	return 0;
}
