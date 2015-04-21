#include "Nodo.h"
#include "String.h" 
 

Nodo::Nodo():stato(0){
}
 
 
Nodo_::Nodo_():catena(0),valore(33){
	il_tipo_sia(49);
	for (int i=0;i<3;i++)
		sotto[i]=0;
}


long Nodo_::quanto(){
	if(tipo!=49)
		buta();
	return valore;
} 
 
 
int Nodo_::da_tipo(){
	return tipo;
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
void * Nodo_::operator [](int a){
	if(a>=da_arita())
		buta();
	return sotto[a];
}
Nodo& Nodo::operator [](int a){
	return *((Nodo*)(Nodo_::operator [](a) ));
}

void Nodo::buta(){
	Nodo_::buta();
}
void Nodo_::buta(){
}

String Nodo_::die_Kette(){
	//cached;
	if(tipo==0){
		COSA_TRIPLICE("Non ho nessuna catena!");
		return ""
	}
	else
	if(tipo==49){
		COSA_TRIPLICE("44 oppure 34!");
		return ""
	}
	else
		return catena;
}
