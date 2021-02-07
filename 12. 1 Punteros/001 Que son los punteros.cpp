/* Punteros -Declaracion de punteros

&n = La dirreccion de n
*n = la varible cuya direccion esta almacenada en n
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n=1;
	int *i;
	i=&n;
	cout<<"Direccion de memora de n: "<<&n<<endl;
	cout<<"Direccion de varible en la direecion almacenada es: "<<*i<<endl;
	
	system("pause");
	return 0;
}
