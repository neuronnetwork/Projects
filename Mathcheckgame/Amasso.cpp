#include "Amasso.h"

Amasso::Amasso():quanti(0)){
		char max=3;
		for (char i=0;i<max;i++)
			Teorema_di_sinistra[i]=0;
		for (char i=0;i<max;i++)
			Teorema_di_destra[i]=0;
};


char Amasso::quanti(){
	return quanti_;
}


 
