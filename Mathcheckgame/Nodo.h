#ifndef NodoH
#define NodoH

class Nodo_{
private:
	int tipo; 
	int arita;
	void* sotto[3];
	long valore;
	 
protected:
	Nodo_();
	long quanto();
	long tanto(long);
	int da_tipo(); 
	inline int il_tipo_sia(int t){
		tipo=t;
		calcola_arita();
		return t;
	} 
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
	bool  operator ==(Nodo&);
	Nodo & operator =(Nodo&);
	Nodo& operator [](int a);
	 
	void buta(); 
	
};  
 
#endif

