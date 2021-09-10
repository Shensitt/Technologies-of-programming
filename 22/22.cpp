#include <iostream>
using namespace std;
int main() {
	int y;
	cout << "write the year\n";
	cin >> y;
	if(( y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)) ){
		cout << "this is a leap year\n";
	}
	else { cout << "this isn't a leap year\n"; }
}