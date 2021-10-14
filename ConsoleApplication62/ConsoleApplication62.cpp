#include <iostream>
#include<cstdlib>

using namespace std;
const int masssize = 15;
int t;

int main() {
	int mas[masssize];
	srand(time(0));

	cout << "array: \n";
	for (int i = 0; i < masssize; i++) {
		mas[i] = rand() % 180 - 90;
		cout << mas[i] << ";";
	}
	cout << "\n";
	//////////////////////////////////////////
	cout << "negative to positive sorted array: " << endl;
	for (int a = 0; a < masssize; a++) {
		for (int i = 0; i < masssize - 1; i++) {
			if (mas[i + 1] <= mas[i]) {
				t = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = t;
				//cout<<mas[i]<<";"<<mas[i+1]<<endl;
			}
		}
	}
	for (int i = 0; i < masssize; i++) {
		cout << mas[i] << ";";
	}
	//////////////////////////////////////////////////	
	cout << "\nmodule up sorted array: " << endl;
	for (int a = 0; a < masssize; a++) {
		for (int i = 0; i < masssize - 1; i++) {
			if (abs(mas[i + 1]) <= abs(mas[i])) {
				t = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = t;
				//cout<<mas[i]<<";"<<mas[i+1]<<endl;
			}
		}
	}
	for (int i = 0; i < masssize; i++) {
		cout << mas[i] << ";";
	}
	/////////////////////////////////////////////
	cout << "\n%2 sorted array: " << endl;
	for (int a = 0; a < masssize; a++) {
		for (int i = 0; i < masssize - 1; i++) {
			if (mas[i + 1] % 2 == 0) {
				t = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = t;
				//cout<<mas[i]<<";"<<mas[i+1]<<endl;
			}
		}
	}
	for (int i = 0; i < masssize; i++) {
		cout << mas[i] << ";";
	}
	/////////////////////////////////////////////
}