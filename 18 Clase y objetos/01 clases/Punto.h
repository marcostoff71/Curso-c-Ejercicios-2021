class Punto{
	private:
		int x,y;
	public:
		Punto(){
			x=0;
			y=0;
		}
		Punto(int pX,int pY){
			this->x=pX;
			this->y=pY;
		}
		int getX();
		int getY();
		void setX(int pX);
		void setY(int pY);
		
	
};
