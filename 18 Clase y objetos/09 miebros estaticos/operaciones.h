#include <stdlib.h>
#include <iostream>

using namespace std;

class Operaciones{
	
	private:
		static int cont;
	public:
		Operaciones(){
			cont++;
		}
		static int suma(int n1,int n2);
		static int resta(int n1,int n2);
		static int multi(int n1,int n2);
		static int division(int n1,int n2);
		static int getCont();
};
