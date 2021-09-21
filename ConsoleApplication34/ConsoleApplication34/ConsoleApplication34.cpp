
#include <iostream>
using namespace std;

int main()
{
	double x,result;int n;
	cout << "write x and  n>0\n";
	cin >> x >> n;
	if (n > 0) {
		result = pow(x, n);
		cout << result;
	}
	else { cout << "you wrote wrong characters, please relaunch the program"; }

}
