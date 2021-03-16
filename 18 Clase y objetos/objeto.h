//Declaracion de una clase
#include<iostream>
#include<stdlib.h>

class Punto{
	//atributos de la clase
	private: 
		int x;
		int y;
	
	//metodos
	public:
		Punto(int x,int y){//contructoe{
			this->x=x;
			this->y=y;
		}
		Punto(){
			this->x=0;
			this->y=0;
		}
		void setX(int xP);
		void setY(int yP);
		int getX();
		int getY();
	
	
	
};
