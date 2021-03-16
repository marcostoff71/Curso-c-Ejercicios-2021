#include<iostream>
#include "Direccion.h"
#include "expediente.h"


using namespace std;


class Estudiante{
	private:
		string codigo;
		float promedio;
		Direccion dir;
		Expediente exp;
	public:
		Estudiante(string codigo,float promedio,int nroExpediente,string direccion):exp(nroExpediente),dir(direccion){
			this->codigo=codigo;
			this->promedio=promedio;
			
			
		}
		
		void mostrarDatos(){
			cout<<"Codigo: "<<codigo<<endl;
			cout<<"Promedio: "<<promedio<<endl;
			cout<<"Numero de expediente: "<<exp.gerNroExpediente()<<endl;
			cout<<"Direccion: "<<dir.getDireccion()<<endl;
		}
};
