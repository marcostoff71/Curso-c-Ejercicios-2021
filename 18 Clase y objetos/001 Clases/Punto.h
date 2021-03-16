
//declaracion de una clase
class  Punto{
	//atributos
	protected:
		int x,y;
		
	public:
		Punto(){
			x=y=0;
		}
		Punto(int px,int py){
			this->x=px;
			this->y=py;
		}
		
		void setX(int valorX);//establecemos el valor de x
		void setY(int valorY);//establecemos el valor de y
		int getY();//obternemos el valor de y
		int getX();//obtenemos el valor de x
	
		
};
