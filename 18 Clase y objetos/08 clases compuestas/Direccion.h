#include<iostream>
using namespace std;


class Direccion{
	private:
		string direccion;
	public:
		Direccion(){
			
		}
		Direccion(string direccion){
			this->direccion=direccion;
		}
		
		string getDireccion(){
			return this->direccion;
		}
};
