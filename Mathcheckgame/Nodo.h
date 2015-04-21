#ifndef NodoH
#define NodoH

#include "String.h"

class Nodo_{
	 
protected:
	Nodo_();
	long quanto();
	long tanto(long);
	int da_tipo(); 
	inline int il_tipo_sia(int t){
		tipo=t;
		calcola_arita();
		if(t!=0)
			catena=new String(10);			
		return t;
	}
	String die_Kette(); 

private:
	int tipo; 
	int arita;
	void* sotto[3];
	long valore;
	String* catena;	
	//DA FARE bool cached;

private:
	inline char calcola_arita(){
		return arita=char(tipo*0.01);
	} 
	
protected:
	void* operator [](int a);
	inline char da_arita(){
		return arita;
	}  
	void buta(); 
}; 


class Nodo: public Nodo_{
public:	 
	Nodo();	
	short stato; //0:draft    49:número
	String die_Kette() const;
	bool  operator ==(Nodo&);
	Nodo& operator =(Nodo&);
	Nodo& operator [](int a);
	 
	void buta(); 
	
};  
 
#endif

