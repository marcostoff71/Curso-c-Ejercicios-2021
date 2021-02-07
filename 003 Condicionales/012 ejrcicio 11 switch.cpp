//simular un cajero automatico

#include<iostream>

using namespace std;

int main(){
	
	int opcion;
	int saldo=0,ingresar,retirar;
	cout<<"\t\tBienvenido"<<endl;
	do{
		ingresar=0;
		retirar=0;
		
		cout<<"1. Consultar saldo"<<endl;
		cout<<"2. Ingresar saldo"<<endl;
		cout<<"3. Retirar saldo"<<endl;
		cout<<"4. salir"<<endl;
		do{
			cout<<"Ingrese un opcion: ";
			cin>>opcion;
		}while(opcion<1||opcion>4);
		
		switch(opcion){
			case 1:
				cout<<"\tSu saldo es: "<<saldo<<endl;
				break;
			case 2:
				cout<<"Cuanto saldo desea ingresar: ";cin>>ingresar;
				saldo+=ingresar;
				cout<<"\tSu nuevo saldo es: "<<saldo<<endl;
				break;
			case 3:
				cout<<"Cuanto saldo desea retirar: ";cin>>retirar;
				if(retirar>saldo){
					cout<<"\tNo es posible retirar mas de su sueldo"<<endl;
					cout<<"\tNo se realizo ningun cambio a sue suldo"<<endl;
				}else{
					saldo-=retirar;
					cout<<"\tSu sueldo es: "<<saldo<<endl;
				}
				break;
				
				
		}
		
		cout<<"\n";
		
	}while(opcion!=4);
	
	
	
	
	return 0;
}
