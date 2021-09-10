

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "write the sides of triangle\n";
    cin >> a >> b >> c;
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        cout << "you can do a triangle\n ";

    }
    else { cout << "you can't do a triangle\n"; }
}

