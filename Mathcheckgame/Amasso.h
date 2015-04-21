#ifndef AmassoH
#define AmassoH
#include "Teorema.h"

/*
Un amasso di teorema, con il tubo di prove entre le due  estremita'
*/

class Amasso{

public:	
	Amasso();
	void add(Teorema&);	
	char quanti();

private:
	Teorema* Teoremi_di_sinistra[3];
	Teorema* Teoremi_di_destra[3];	
	char quanti_;
	
	
};





#endif
