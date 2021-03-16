#pragma once
class Punto1
{	
private:
	int x;
	int y;
public:
	Punto1() {
		x = 0;
		y = 0;
	}
	Punto1(int pX,int pY) {
		this->x = pX;
		this->y = pY;
	}
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();

};

