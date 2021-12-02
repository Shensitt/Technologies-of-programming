#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream test1("test1.txt");
	if (!test1) {
		cout << "error while opening the file" << endl;
		
	}
	ofstream test2("test2.txt");
	if (!test2) {
		cout << "error while opening the file" << endl;

	}
	char text[3000];

	int a = 0;
	while (!test1.eof()) {
		text[a] = test1.get();
		a++;
	}
	for (int i = a; i < 3000; i++) {
		text[i] = 0;
	}
	cout << text << endl<<endl;

	int sym_cnt = 0; int word_mass_index = 0;
	char word1[20];
	string word_mass[1000];
	for (int aa = 0; aa < a; aa++) {
		if (text[aa] != ' ' && text[aa] != '\n' && text[aa] != '\t') {

			word1[sym_cnt] = text[aa];
		
			sym_cnt++;
			for (int aa = sym_cnt; aa < 20; aa++) {
				word1[aa] = 0;
			}

			if (sym_cnt > 20) { break; }
			
		}
		else {
			word_mass[word_mass_index] = word1;
			sym_cnt = 0;
			word_mass_index++;

			if (word_mass_index % 2 == 0) {
				if (word_mass_index != 0) {

					test2 << word_mass[word_mass_index - 1] << ' ';
					test2 << word_mass[word_mass_index - 2] << ' ';
				}
			}
		}
	}
	
	test1.close();
}
