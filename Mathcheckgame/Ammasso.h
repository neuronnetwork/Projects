#ifndef AmmassoH
#define AmmassoH
#include "Teorema.h"

/*
Un Ammasso di teoremi, con il tubo di prove entre le due  estremita'
*/

class Ammasso{

public:	
	Ammasso();
	void add_a_d_in_sicurezza(Teorema&);
	void add_a_s_in_sicurezza(Teorema&);  

	char quanti_a_destra() const;
	char   quanti_a_sinistra() const;
	Teorema& teorema_di_sinistra(char) const;
	Teorema& teorema_di_destra(char) const;
	bool paragonare() const;
	
protected:
	void add_a_destra  (Teorema&);	
	void add_a_sinistra(Teorema&);	
	
	Teorema* tds2;
private:
	static const char max=3;
	Teorema* tds[max];
	Teorema* t_di_sinistra[max];
	Teorema* t_di_destra[max];	
	char quanti_a_sinistra_;	
	char quanti_a_destra_;
	
};





#endif
