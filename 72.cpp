#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
#include <clocale>
#include <windows.h>

#include <conio.h>
using namespace std;
//
//
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	//locale loc("en_US");
	char input_string[100];
	cin >> input_string;
//
//
	int glasnye_num = 0, soglasnye_num = 0, strochnye_num = 0, propisnye_num = 0;
	int real_length = strlen(input_string);
	//const char* glasnye
	char glasnye[] = { '¸','ó','å','û','à','î','ý','ÿ','è','þ','¨','Ó','Å','Û','À','Î','Ý','ß','È','Þ' };
	//int glasnye_length = strlen(glasnye);
	char soglasnye[] = { 'é','ö','ê','í','ã','ø','ù','ç','õ','ô','â','ï','ð','ë','ä','æ','÷','ñ','ì','ò','á','É','Ê','Í','Ö','Ã','Ø','Ù','Ç','Õ','Ô','Â','Ï','Ð','Ë','Ä','Æ','×','Ñ','Ì','Ò','Á' };
    char strochnye[] = { '¸','ó','å','û','à','î','ý','ÿ','è','þ', 'é','ö','ê','í','ã','ø','ù','ç','õ','ô','â','ï','ð','ë','ä','æ','÷','ñ','ì','ò','á' };
	char propisnye[] = { '¨','Ó','Å','Û','À','Î','Ý','ß','È','Þ','É','Ê','Í','Ö','Ã','Ø','Ù','Ç','Õ','Ô','Â','Ï','Ð','Ë','Ä','Æ','×','Ñ','Ì','Ò','Á' };
	//char eng[] = { 'e','E','r' };
	//getline(cin, input_string);
	//if (isalpha(input_string[i], locale("rus")) {
		for (int o = 0; o <= 20; o++) {
			for (int i = 0; i <= real_length; i++) {
				//if (isalpha(input_string[i],locale("rus"))) {
				if (input_string[i] == glasnye[o]) {
					//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
					glasnye_num++;
				}
			}
		}
	//}

	for (int o = 0; o <= 42; o++) {
		for (int i = 0; i <= real_length; i++) {
			if (input_string[i] == soglasnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				soglasnye_num++;
			}
		}
	}
	for (int o = 0; o <= 31; o++) {
		for (int i = 0; i <= real_length; i++) {
			if (input_string[i] == strochnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				strochnye_num++; //cout << glasnye_num << endl;
			}
		}
	}

	for (int o = 0; o <= 33; o++) {
		for (int i = 0; i <= real_length; i++) {
			if (input_string[i] == propisnye[o]) {
				//cout << "input_string " << input_string[i] << "   glasnye " << glasnye[o] << endl;
				propisnye_num++;
			}
		}
	}


//
//
	cout << "amount of letters: \n" << "glasnye: " << glasnye_num <<
		"\nsoglasnye: " << soglasnye_num << "\nstrochnye: " << strochnye_num <<
		"\npropisnye: " << propisnye_num << endl;
//
}

