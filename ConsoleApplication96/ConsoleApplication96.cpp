#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
string filename;
string out_filename;

//int file_copy(string filename, string out_filename) {
//	ifstream file(filename);
//	if (!file) {
//		cout << "error while opening the file" << endl;
//	}
//	int a = 0;
//	char line[200];
//	while (!file.eof()) {
//		file.getline(line, 200);
//		a++;
//	}
//	cout << a;
//	file.seekg(0);
//	ifstream out_file(out_filename);
//	if (!out_file) {
//		cout << "error while opening the file" << endl;
//	}
//	while (!out_file.eof()) {
//		for (int n = 1; n <= a; n++) {
//			file.getline(line, 200);
//			out_file << n << "  " << line << endl;
//		}
//	}
//	file.close();
//	out_file.close();
//	return 0;
//}

int main() {
	/*file_copy("test1.txt", "test3.txt");
	file_copy("test2.txt", "test3.txt");*/
	
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
	int a = 0;
	char line[200];
	int prog = 0;

	while (!test1.eof()) {
		test1.getline(line, 200);
		a++;
	}
	//cout << a;
cout << "copying file1" << endl;
cout << "[";
	test1.seekg(0);
	while (!test1.eof()) {
		for(int n = 1;n<=a;n++){
			test1.getline(line,200);
			test3 <<n<< "  " << line<<endl;
			if(prog<11){
			cout << "=";
			prog++;
			Sleep(350);
			}
		}
	}
	cout << "]"<<endl<<"done"<<endl<<endl;
	

	test3 << endl;

	a = 0; prog = 0;
	//char line[200];
	while (!test2.eof()) {
		test2.getline(line, 200);
		a++;
	}
	//cout << a;
cout << "copying file2" << endl;
cout << "[";
	test2.seekg(0);
	while (!test2.eof()) {
		for (int n = 1; n <= a; n++) {
			test2.getline(line, 200);
			test3 << n << "  " << line << endl;
			if (prog < 11) {
				cout << "=";
				Sleep(350);
				prog ++;
			}
		}
	}
	cout << "]" << endl << "done" << endl << endl;
	

	test1.close();
	test2.close();
	test3.close();
}
