
#include <fstream>
#include <iostream>
#include<string>
using namespace std;
const int length = 150;

int main() {
	ifstream first_file("test1.txt");
	if (!first_file) {
		cout << "error while opening the file";
		return 1;
	}
	ofstream second_file("test2.txt");
	if (!second_file) {
		cout << "error while opening the file";
		return 1;
	}

	char word[length];
	char line[length];
	cout << "write the word:\n";
	cin >> word;

	
	while (first_file.getline(line, length)) {
		if (strstr(line, word)) {

			second_file << line << "\n";
			
		}

	}
	
	
	first_file.close();
	second_file.close();
}
