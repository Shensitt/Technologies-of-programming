#include <fstream>
#include <iostream>
#include <string>
#include <cctype>
#include <conio.h>
using namespace std;

int main() {
	ifstream test1("test1.txt");
	if (!test1) {
		cout << "error while opening the file" << endl;
		//return 1;
	}
	/*test1.seekg(0, ios::beg);
	int length = test1.tellg();
	cout << length;*/
	char text[3000];
	int a = 0;
	while (!test1.eof()) {

		//for (int a = 0; a < 3000; a++) {
		text[a] = test1.get();
		//}
		a++;

	}
	for (int i = a; i < 3000; i++) {
		text[i] = 0;
	}
	cout << text << endl;

	int count_bw;
	int sym_cnt = 0, ans_cnt = 0;
	char word1[20], word2[20], word2_count[20];

	for (int aa = 0; aa < a; aa++) {
		if ((text[aa + 1] == ' ' || text[aa + 1] == '\n' || text[aa + 1] == '\t') &&
			(text[aa + 2] == ' ' || text[aa + 2] == '\n' || text[aa + 2] == '\t') &&
			(text[aa + 3] == ' ' || text[aa + 3] == '\n' || text[aa + 3] == '\t')) {
			break;
		}

		//sym_cnt=0;
		if (text[aa] != ' ' && text[aa] != '\n' && text[aa] != '\t') {

			word1[sym_cnt] = text[aa];
			//cout<<"sym_cnt ="<<sym_cnt<<endl;
			sym_cnt++;
			for (int aa = sym_cnt; aa < 20; aa++) {
				word1[aa] = 0;
			}

			if (sym_cnt > ans_cnt) {
				count_bw = 0;
				for (int i = 0; i < ans_cnt; i++) {
					word2[i] = word1[i];
					//word2_count[i]=word1[i];
				}
				for (int aa = ans_cnt; aa < 20; aa++) {
					word2[aa] = 0;
				}
				ans_cnt = sym_cnt;
				count_bw++;
			}
			if (sym_cnt > 20) { break; }
			//cout << word2 << endl;
			//cout << sym_cnt << endl;
		}
		else {
			/*for(int a=sym_cnt;a<20;a++){
				word1[a]=0;
			}*/

			sym_cnt = 0;
			//for (int i = 0; i < 20; i++) {
			//	if(word2_count[i]=word2[i]){
			//		int a=1;
			//	}
			//    //word2[i] = word1[i];
			//	
			//}
			/*if(a==1){
				count_bw++;
			}*/
			/*if(!isalpha(text[a])&&!isalpha(text[a+1])&&!isalpha(text[a+2])&&!isalpha(text[a+3])&&!isalpha(text[a+4])){
				for(int beb=a;beb<3000;beb++){
					text[beb]=0;
				}
				break;
			}*/
		}
		//cout << word2 << endl;
	}

	/*for(int a=0;a<3000;a++){

	}
*/cout << "\n\nThe longest word in a text: ";
cout << word2 << endl;
cout << "Meets this times: ";
cout << count_bw << endl;
//cin>>count_bw;
//getch();
test1.close();
}
