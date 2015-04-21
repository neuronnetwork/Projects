#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include  "Mathcheck.h"
#include  "String.h"
#include  "Nodo.h"
#include  "Ammasso.h"


int main(int argc, char** argv) {
	
	
	Nodo a,b;
	Teorema x,y,z,zz,zzz;
	Ammasso u;
    	
	
	char input = 0;
	cout << "Press q to quit, press a to execute foo." << endl;	
	String s;s="sdsd";
	cout << "Ready." << endl;
	while(1) {
		cin >> input;
		if(input == 'l') { 
	cout << "added." << endl; 
			u.add_a_d_in_sicurezza(x); 
		}else
		if(input == 'p') { 
		cout<<u.paragonare()<<endl;	
		cout<<(int)u.quanti_a_sinistra()<<"..........."<<(int)u.quanti_a_destra()<<endl;
	//	cout<<u.teorema_di_sinistra(1)<<endl;		
		}else
		if(input == 'a')  {
			u.add_a_s_in_sicurezza(y);
	cout << "added." << endl; 
		 }
		else
		if(input == 'm') {
			x=y;
		    
		}else
		if(input == 'n') {
			  
		     cout<< (a==b)<<endl;;
		}else 
		if(input == 't') {
		    cout<<sizeof(short)<<"     "<<sizeof(char)<<endl;
		    cout<<sizeof(short char)<<endl;
		    
		COSA_TRIPLICE("Non ho nessuna catena\"!);
		} else 
		if(input == 's') {
		    s.test("");
		} else 
		if(input == 'u') {
		//	cout<< Mathcheck::ultimo(string("ciao bello!",400),"o""")<<endl;
		} else if(input == 'q') {
			break;
		} else if(input != '\n') {
			cout << "Unknown command '" << input << "'! Ignoring...\n";
		}
	}

	return 0;
}
