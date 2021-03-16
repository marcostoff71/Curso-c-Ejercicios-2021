//imeplemnteacion de la clase persona
#include<iostream>
using namespace std;


class Persona{
	//atributos
	private:
		string nombre;
		int edad;
		string dni;
	public:
		//sobrecarga de metodos
		Persona(string pNombre){
			nombre=pNombre;
		}
		Persona(int pEdad){
			edad=pEdad;
		}
		Persona(string pNombre,int pEdad){
			nombre=pNombre;
			edad=pEdad;
		}
		
		Persona(string pNombre,int pEdad,string pDni){
			nombre=pNombre;
			edad=pEdad;
			dni=pDni;
		}
		
};
