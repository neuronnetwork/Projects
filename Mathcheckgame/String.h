

#include <string>
using std::string; 

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


class String: public string{

public:
	String();
	String(long lunghezza);
 	
	typedef basic_string BasicString;
	BasicString& operator=(const char*);
	BasicString& operator+=(const char*);
	BasicString& operator+=(string);

private:
	static const long lunghezza_importante;
	static const long lunghezza_di_lentezza;
	static const long prima_di_badalloc;
public:
	string test(string);
	 
};

