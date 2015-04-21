#include"Teorema.h"

  
Teorema::Teorema(){
}

Teorema& Teorema::operator=(Teorema&andrer){
	
	switch(stato){
		case 0:
		//	Nodo::operator=(andrer);
			goto bene;
		default:
		COSA_TRIPLICE("Munka'd van!");	
	}
	bene:
		return andrer;
}



/*
Teorema::operator==(){
}
*/

