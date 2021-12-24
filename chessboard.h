#include "coord.h"

//------------------CLASSE SCACCHIERA---------------------
class Scacchiera
{
	
	private:
		//variabile che rappresenta la scacchiera 8x8
		char scacchiera[8][8];	
		coord in;//coordinate partenza
		coord fin;//coordinare arrivo

	public:		
		//costruttore
		Scacchiera();
		
		void print();//stampa la scacchiera
		
		bool input();//riceve in input la mossa e restituisce 0 se va fuori dalla scacchiera
		
	
};

