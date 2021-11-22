/*Задание 7–1. [Подсчёт английских букв]
Ввести с клавиатуры строку. Определить,
сколько в этой строке гласных, согласных,
строчных и прописных английских букв (использовать <сctype>).
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	char input_string[100];
	cin >> input_string;


	int glasnye_num = 0, soglasnye_num = 0, strochnye_num = 0, propisnye_num = 0;
	int real_length = strlen(input_string);

	char glasnye[] = { 'a','e','y','u','i','o','A','E','Y','U','I','O' };
	//int glasnye_length = strlen(glasnye);
	char soglasnye[] = { 'q','w','r','t','p','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','R','T','P','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M' };
	char strochnye[] = { 'Q','A','Z','W','S','X','E','D','C','R','F','V','T','G','B','Y','H','N','U','J','M','I','K','O','L','P' };
	char propisnye[] = { 'q','a','z','w','s','x','e','d','c','r','f','v','t','g','b','y','h','n','u','j','m','i','k','o','l','p' };

	for (int o = 0; o <= 12; o++) {
		for (int i = 0; i <= real_length; i++) {
			//cout << input_string[i]<<endl;
			if (input_string[i] == glasnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				glasnye_num++; //cout << glasnye_num << endl;
			}
		}	
	}		

	for (int o = 0; o <= 40; o++) {
		for (int i = 0; i <= real_length; i++) {
			if (input_string[i] == soglasnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				soglasnye_num++;
			}
		}
	}
	for (int o = 0; o <= 26; o++) {
		for (int i = 0; i <= real_length; i++) {
			if (input_string[i] == strochnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				strochnye_num++; //cout << glasnye_num << endl;
			}
		}
	}

	for (int o = 0; o <= 26; o++) {
		for (int i = 0; i <= real_length; i++) {
			if (input_string[i] == propisnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				propisnye_num++;
			}
		}
	}


		
		
	cout << "amount of letters: \n" << "glasnye: " << glasnye_num <<
		"\nsoglasnye: " << soglasnye_num << "\nstrochnye: " << strochnye_num <<
		"\npropisnye: " << propisnye_num << endl;

}
