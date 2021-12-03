#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream test1("test1.txt");
	if (!test1) {
		cout << "error while opening the file" << endl;
	}
	ifstream test2("test2.txt");
	if (!test2) {
		cout << "error while opening the file" << endl;
	}

	ofstream test3("test3.txt");
	if (!test3) {
		cout << "error while opening the file" << endl;
	}
////////////////////////////////////////////////////
	char text1[3000];

	int a = 0;
	while (!test1.eof()) {
		text1[a] = test1.get();
		a++;
	}
	for (int i = a; i < 3000; i++) {
		text1[i] = 0;
	}
	cout << text1 << endl << endl;


	char text2[3000];

	int b = 0;
	while (!test2.eof()) {
		text2[b] = test2.get();
		b++;
	}
	for (int i = b; i < 3000; i++) {
		text2[i] = 0;
	}
	cout << text2 << endl << endl; 
	int word_max;
	int sym_cnt = 0; int word_mass_index_1 = 0; //int word_mass_index_2 = 0;
	char word1[20];
	string word_mass[5000];
	for (int aa = 0; aa < a; aa++) {
		if (text1[aa] != ' ' && text1[aa] != '\n' && text1[aa] != '\t') {

			word1[sym_cnt] = text1[aa];

			sym_cnt++;
			for (int aa = sym_cnt; aa < 20; aa++) {
				word1[aa] = 0;
			}

			if (sym_cnt > 20) { break; }

		}
		else {
			word_mass[word_mass_index_1] = word1;
			sym_cnt = 0;
			word_mass_index_1+=2;
			word_max = word_mass_index_1;

			/*if (word_mass_index % 2 == 0) {
				if (word_mass_index != 0) {

					test2 << word_mass[word_mass_index - 1] << ' ';
					test2 << word_mass[word_mass_index - 2] << ' ';
				}
			}*/
		}
	}

	/*string word_mass_2[1000]; */word_mass_index_1 = 1;
	for (int aa = 0; aa < b; aa++) {
		if (text2[aa] != ' ' && text2[aa] != '\n' && text2[aa] != '\t') {

			word1[sym_cnt] = text2[aa];

			sym_cnt++;
			for (int aa = sym_cnt; aa < 20; aa++) {
				word1[aa] = 0;
			}

			if (sym_cnt > 20) { break; }

		}
		else {
			word_mass[word_mass_index_1] = word1;
			sym_cnt = 0;
			word_mass_index_1+=2;

			/*if (word_mass_index % 2 == 0) {
				if (word_mass_index != 0) {

					test2 << word_mass[word_mass_index - 1] << ' ';
					test2 << word_mass[word_mass_index - 2] << ' ';
				}
			}*/
		}
	}
	//for(word_mass)
	//test3<<word_mass_1[]
	//////////////////////////////////////////////////
	
	for (word_mass_index_1=0;word_mass_index_1<word_max; word_mass_index_1++) {
		test3 << word_mass[word_mass_index_1]<<endl;
	}

	test1.close();
	test2.close();
	test3.close();
}

