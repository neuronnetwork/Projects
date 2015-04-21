#include "Ammasso.h"
#include "Mathcheck.h"

		
Ammasso::Ammasso():quanti_a_destra_(0),quanti_a_sinistra_(0){
		for (;quanti_a_sinistra_<max;quanti_a_sinistra_++)
			teorema_di_sinistra[quanti_a_sinistra_]=0;
		for (;quanti_a_destra_<max;quanti_a_destra_++)
			teorema_di_destra[quanti_a_destra_]=0;
		quanti_a_sinistra_=0;
		quanti_a_destra_=0;
};


char Ammasso::quanti_a_destra() const{
	return quanti_a_destra_;
}

char Ammasso::quanti_a_sinistra()const{
	return quanti_a_sinistra_;
}
 
void Ammasso::add_a_destra(Teorema&t){ 
	assert(quanti_a_destra()<max);
	teorema_di_destra[quanti_a_destra_++]=&t;
}


void Ammasso::add_a_sinistra(Teorema&t){ 
	assert(quanti_a_sinistra()<max);
	teorema_di_sinistra[quanti_a_sinistra_++]=&t;
}

void Ammasso::add_a_d_in_sicurezza(Teorema&t){ 
	if(quanti_a_destra()<max);
		teorema_di_destra[quanti_a_destra_++]=&t;
}


void Ammasso::add_a_s_in_sicurezza(Teorema&t){ 
 	if (quanti_a_sinistra()<max);
		teorema_di_sinistra[quanti_a_sinistra_++]=&t;
}

bool Ammasso::paragonare() const{ 
	if(quanti_a_sinistra()!=quanti_a_destra())
		return false;

	for (int e=0;e<quanti_a_sinistra();++e)
		if((&teorema_di_sinistra[e]==
			&teorema_di_destra[e]	))
				return true;
	for (int e=0;e<quanti_a_sinistra();++e)
		if(!(teorema_di_sinistra[e]==
			teorema_di_destra[e]	))
				return false;
	return true; 
}


Teorema& Ammasso::di_sinistra(char wo) const {
		assert(wo>0);  
		assert(wo<quanti_a_sinistra());
		return *teorema_di_sinistra[wo];
	}
	
Teorema& Ammasso::di_destra(char wo) const {
		assert(wo>0);  
		assert(wo<quanti_a_destra()); 
		return *teorema_di_destra[wo];
	} 

 
