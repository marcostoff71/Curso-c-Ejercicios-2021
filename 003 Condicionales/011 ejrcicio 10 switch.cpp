//ejercios meses del a�o
#include<iostream>

using namespace std;
int main(){
	int mes;
	cout<<"Ingresa un numero del 1/12 y te dire que mes es: ";cin>>mes;
	
	switch(mes){
		
		case 1:
			cout<<"El mes es Enero"<<endl;
			break;
		case 2:
			cout<<"El mes es Febrero"<<endl;
			break;
		case 3:
			cout<<"El mes es Marzo"<<endl;
			break;
		case 4:
			cout<<"El mes es Abril"<<endl;
			break;
		case 5:
			cout<<"El mes es Mayo"<<endl;
			break;
		case 6:
			cout<<"El mes es junio"<<endl;
			break;
		case 7:
			cout<<"El mes es Julio"<<endl;
			break;
		case 8:
			cout<<"El mes es Agosto"<<endl;
			break;
		case 9:
			cout<<"El mes es Septiembre"<<endl;
			break;
		case 10:
			cout<<"El mes es Octubre"<<endl;
			break;
		case 11:
			cout<<"El mes es Noviembre"<<endl;
			break;
		case 12:
			cout<<"El mes es Diciembre"<<endl;
			break;
		default:
			cout<<"Fuera del rango"<<endl;
			break;
	}
	
	
	
	
	return 0;
}
