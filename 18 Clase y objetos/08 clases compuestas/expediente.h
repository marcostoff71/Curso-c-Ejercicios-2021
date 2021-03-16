#include <iostream>

using namespace std;

class Expediente{
	private:
		int nroExpediente;
	public:
		Expediente(int nroEx){
			this->nroExpediente=nroEx;
		}
		Expediente(){
		}
		
		~Expediente(){
			
		}
		
		int gerNroExpediente(){
			return this->nroExpediente;
		}
	
};
