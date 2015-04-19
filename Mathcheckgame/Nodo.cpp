#include "Nodo.h"
 
Nodo::Nodo(){  
}
 
 
int Nodo_::da_tipo(){
	return tipo;
}
Nodo_::Nodo_():valore(33){
	il_tipo_sia(49);
	for (int i=0;i<3;i++)
		sotto[i]=0;
}


long Nodo_::quanto(){
	if(tipo!=49)
		buta();
	return valore;
}

long Nodo_::tanto(long v){
	if(tipo!=49)
		buta();
	return (valore=v);
}

bool Nodo::operator ==(Nodo&altro){
		
	if(altro.da_tipo()!=(*this).da_tipo())
			return false;
			aaaaaa=233;
	if(tipo==49)
		return altro.quanto()==quanto();
	for (int i=0;i<arita;i++)
		if(!(altro[i]==(*this)[i]))
			return false;
		return true;
}

Nodo& Nodo::operator =(Nodo&altro){//non e' pronta

		return *this;
		
	if(altro.da_tipo()==49){
		tanto(altro.quanto());
		return *this;
	}
	
		
	il_tipo_sia(altro.tipo);
		
	throw * new int;
	return *this;
}
Nodo& Nodo::operator [](int a){
	if(a>=arita)
		buta();
	return *((Nodo*)sotto[a]);
}

void Nodo::buta(){
	Node_::buta();
}
void Nodo_::buta();
	throw * new int;
}
