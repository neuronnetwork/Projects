#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//#include  "Mathcheck.h"
#include  "String.h"


int main(int argc, char** argv) {
	char input = 0;
	
	cout << "Press q to quit, press a to execute foo." << endl;	
	String s;s="sdsd";
	cout << "Ready." << endl;
	while(1) {
		cin >> input;
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
