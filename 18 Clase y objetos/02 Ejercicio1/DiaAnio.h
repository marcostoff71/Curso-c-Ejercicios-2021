//declaracion de la clase
class DiaAnio{
	private:
		int mes,dia;
	public:
		DiaAnio(int pdia,int pmes){//metodo constructor
			mes=pmes;
			dia=pdia;
		}
		bool igual(DiaAnio& d);
		void visualizar();
};
