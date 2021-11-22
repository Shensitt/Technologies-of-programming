#include <iostream>
#include<cstring>
#include <string>
#include <cctype>
//#include <stdio.h>
using namespace std;
int main() {
	string input;
	getline(cin, input);
	int length = input.length();
	int words = 0,i; 

	if (input.at(0) != ' ') { words++; }

	for (i = 0; i <=length-1; i++) {
		if (input.at(i) == ' ' || input.at(i) == '\n' || input.at(i) == '\t') {
			
				
				words++;
				

			
		    
		}
		
	}
	 
	cout << words;
}