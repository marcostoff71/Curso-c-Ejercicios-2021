#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;
class Perro{
	//atributo
	private:
		string nombre,raza;
	public:
		Perro(){
			
		}
		Perro(string pNombre,string pRaza){
			nombre=pNombre;
			raza=pRaza;
		}
		void mostrarDatos();
		void juugar();
		~Perro(){//destructor
			
		}
};
