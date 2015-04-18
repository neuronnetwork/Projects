#include"String.h"

const long String::lunghezza_importante=100000;  //500000 crashes the old laptop
const long String::prima_di_badalloc=500000000;  //std::badalloc non esiste :-(
const long String::lunghezza_di_lentezza=15000000;
 

String::String():string("",lunghezza_importante){
}
String::String(long lunghezza):string("",lunghezza){
 	
}

String::BasicString& String::operator=(const char*s){
	return string::operator=(s);
}

String::BasicString& String::operator+=(const char*s){
	if(length()>lunghezza_di_lentezza)
		goto lento;
	if(length()>prima_di_badalloc)
		goto bad_allocation;
		
	String::BasicString * risultato;
	try{
		risultato=&string::operator+=(s);
		} 
		catch(int   s){//std::length_error){
			goto abort;		
		}
		catch(std::bad_alloc){//this happend because of notepadappen
			cout<<"BAD ALLOCATION!!!!!!!"<<endl;
			goto bad_allocation;		
		}


	return *risultato;	
	lento:	
		cout<<length()<<" e' una lunghezza che causa lentezza!"<<endl;;
		goto abort;
	bad_allocation:	
		cout<<length()<<" e' una lunghezza troppo importante!"<<endl;;
	pericolo:		
	abort:
			std::cout<<"Non faccio niente."<<endl;
			return (*((string*)(this)))
			;
}


String::BasicString& String::operator+=(string s){
	return operator+=(s.c_str());
}

string String::test(string){  
	string& that_string=*this;
	(*this)+=*this;
	std::cout<<this->string::length()<<endl;
		
		return (*this). c_str();
	}
