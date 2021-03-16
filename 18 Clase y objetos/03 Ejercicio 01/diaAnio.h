#include<iostream>
#include<stdlib.h>

class DiaAnio{
	private:
		int dia,mes;
		
	public:
		DiaAnio(int pDia,int pMes){
			dia=pDia;
			mes=pMes;
		}
		
		bool iguar(DiaAnio* comp);
		void visualizar();
		int getMes();
		int getDia();
};
