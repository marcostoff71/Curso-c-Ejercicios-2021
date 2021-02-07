/*15. Realice un programa que solicite al usuario que piense un número entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango[1-100],e indicarle al usuario si el numero que digito es menor o mayor 
al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero
de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	srand(time(NULL));
	//declaramos las variables
	int num,numUsuario,intentos=0;
	//generamos el numero a aleatorio 
	num=1+rand()%(101-1);
	
	
	cout<<"\tNumero magico"<<endl;
	do{
		
		cout<<"Inserta el numero: ";cin>>numUsuario;
		intentos++;
		if(numUsuario>num){
			cout<<"\tEl numero es menor"<<endl;
		}else if(numUsuario<num){
			cout<<"\tEl numero es mayor"<<endl;
			
		}else{
			cout<<"\t\tFelicidades encontraste el numero magico"<<endl;
			cout<<"\t\tNumero de intentos: "<<intentos<<endl;
		}
		cout<<endl;
		
		
	}while(numUsuario!=num);
	

	
	
	
	
	
	system("pause");
	return 0;
}
