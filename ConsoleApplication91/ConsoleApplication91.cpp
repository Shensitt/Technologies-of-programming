#include <fstream>
#include <iostream>
#include<string>
using namespace std;


int main(){
	ifstream first_file("test1.txt");
	if (!first_file) {
		cout << "error while opening the file";
		return 1;
	}
	
	string new_file_name;
	cout << "\nwrite the name of the new file: \n";
	cin >> new_file_name;
	ofstream newfile(new_file_name);
	if (!newfile) {
		cout << "error while creating/opening the file";
		return 1;
	}

	string s;
	while (!first_file.eof()) {
		getline(first_file, s);
		newfile << s << "\n";
	}

	/*char ch[1000];
	for (int a = 0; a < 1000; a++) {
		ch[a] = first_file.get();
		newfile << ch[a];
		if (first_file.eof()) { break;}
	}*/
	
	
	first_file.close();
	cout << "\nWriting done\n";
	newfile.close();
	
}

