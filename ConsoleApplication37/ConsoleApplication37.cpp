
#include <iostream>
using namespace std;

int main()
{
	int i = 100000; int sum = 0; int first, second, third, fourth, fifth, sixth;

	for (i = 100000; i <= 999999; i++)
	{
		first = i / 100000;
		second = (i % 100000) / 10000;
		third = ((i % 100000) % 10000) / 1000;
		fourth = (((i % 100000) % 10000) % 1000) / 100;
		fifth = ((((i % 100000) % 10000) % 1000) % 100) / 10;
		sixth = i % 10;
		if (first + second + third == fourth + fifth + sixth) { sum = sum + 1; }
	}
	cout << sum << endl;

}
