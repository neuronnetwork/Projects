 
#include "Nodo.h"
#include "String.h"
  
 
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



long Nodo_::tanto(long v){
	if(tipo!=49)
		buta();
	return (valore=v);
}

bool Nodo::operator ==(Nodo&altro){
		
	if(altro.da_tipo()!=(*this).da_tipo())
			return false;
	if(da_tipo()==49)
		return altro.quanto()==quanto();
	for (int i=0;i<da_arita();i++)
		if(!(altro[i]==(*this)[i]))
		return true;
}

Nodo& Nodo::operator =(Nodo&altro){//non e' pronsa

		return *this;
		
	if(altro.da_tipo()==49){
		tanto(altro.quanto());
		return *this;
	}
	
		
	il_tipo_sia(altro.da_tipo());
		
	throw * new int;
	return *this;
}
void Nodo_::operator [](int a){
	if(a>=da_arita())
		buta();
	return *(sotto[a]);
}
Nodo& Nodo::operator [](int a){
	return *((Nodo*)(this))(zo[a]);
}

void Nodo::buta(){
	Node_::buta();
}
void Nodo_::buta(){
}
