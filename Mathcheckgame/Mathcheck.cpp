#include  "Mathcheck.h"

int Mathcheck::ultima(string s,string cosa){
	return ultimo(s,0,cosa);
}
int Mathcheck::ultimo(string s,string cosa){
	return ultimo(s,0,cosa);
}
int Mathcheck::ultimo(string s,int da,string cosa)
        {
        int i=da;
        int stente;
        while((siguente=s.find(cosa, i))!= string::npos)
        {
        i = siguente+1;
        }
        if (i==da)
                return da;
        else
                return i-1+cosa.length();
}
int Mathcheck::saltare(string s,int da,string cosa)
        {
        int i=da;
        unsigned siguente;
        while(((siguente=s.find(cosa, i))!= string::npos)
              &&(siguente<i+cosa.length())
                )
        {
        i = siguente+1;
        }
        if (i==da)
                return da;
        else
        i = i-1+cosa.length();
        return i;
}
int Mathcheck::spazi(string& s,int da,string cosa,string con)
        {
        int i=da;
        unsigned siguente;
        while(((siguente=s.find(cosa, i))!= string::npos)
              &&(siguente<i+cosa.length())
                )
        {
        s.erase(siguente,1);
        s.insert(siguente,con );
        i = siguente+1;
        }
        if (i==da)
                return da;
        else
                i = i-1+cosa.length();
                return i;
}


int Mathcheck::mangia(string& s,int da,string cosa)
        {
        int i=da;
        unsigned siguente;
        while(((siguente=s.find(cosa, i))!= string::npos)
              &&(siguente<i+cosa.length())
                )
        {
        s.erase(siguente,1);
        i = siguente;
        }
        if (i==da)
                return da;
        else
                return i;
}


string Mathcheck::testo_per_memo(string s){

        goto ok;
        errore_grammaticale:
                return s;
        fare_niente:
                return s;
        ok:
        //solo uno spazio " " ammesso
        int indentazione=0;
        int siguente,a;
        if((siguente=s.find("|",indentazione))== string::npos)
                goto errore_grammaticale;
        a=siguente;
        indentazione=siguente+1;
        if((siguente=s.find("-",indentazione))== string::npos)
                goto errore_grammaticale;
        indentazione=siguente+1;
        indentazione=spazi(s,indentazione,"-");
        if((siguente=s.find("+",indentazione))== string::npos)
                goto fare_niente;
        a=siguente;
        indentazione=siguente+1;
        if((siguente=s.find("\n",indentazione))== string::npos)
                goto errore_grammaticale;
        indentazione=siguente+1;
        indentazione=mangia(s,indentazione);
        s.insert(indentazione,string("LA!"));
                goto errore_grammaticale;

        indentazione= saltare(s,indentazione,"+");
        if(indentazione==0)
                return s;
        s.insert(indentazione,string("QUI!"));
                return s;

        int dove= indentazione;
        indentazione= saltare(s,indentazione,"\n");
{       int i = s.find("+", i);
        indentazione=i;
        i = s.find("\n", i);
        i++;
        while(
                i = s.find("\n", i))
        {    ;
        }
        for(i = s.find("  ", 0); i != string::npos; i = s.find("  ", i))
              {
              s.erase(i, 1);
              }
}

                    return s;
        }

