
#include <iostream>

class Estico
{
	private:
		//declaracion de un atributo estatico
		static int num;
	public:
		Estico() {
			num++;
		}
		int getCont();


};

