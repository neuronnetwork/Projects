#ifndef NodoH
#define NodoH

class Nodo_{
private:
	int tipo;
	int aaaaaa;
	int arita;
	void* sotto[3];
	long valore;
	 
protected:
	Nodo_();
	long quanto();
	long tanto(long);
	int da_tipo(); 
	inline char calcola_arita(){
		return arita=char(tipo*0.01);
	} 
	int il_tipo_sia(int t){
		tipo=t;
		calcola_arita();
		return tipo;
	}
	void buta(); 
}; 

class Nodo{
public:	 
	Nodo(); 
	bool  operator ==(Nodo&);
	Nodo & operator =(Nodo&);
	Nodo& operator [](int a);
	 
	void buta(); 
}; 


#endif

