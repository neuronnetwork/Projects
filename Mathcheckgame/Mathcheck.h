#ifndef MathcheckH
#define MathcheckH 

#include"String.h"


class Mathcheck{
         public:  
                static string testo_per_memo(string);
                static int ultima(string s,int cosa);
                static int ultimo(string s,int cosa);
                static int ultimo(string s,int da,string cosa);
                static int ultimo(string s,string cosa);
                static int saltare(string s,int da,string cosa);
                static int spazi(string&s,int da=0,string cosa=" ",string con="_");
                static int mangia(string&s,int da,string cosa=" ");
};

#endif

