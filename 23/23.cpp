

#include <iostream>
using namespace std;


int main()
{int point_x, point_y, x1, x2, y1, y2;

    cout << "write x and y of the point\n";
    cin >> point_x >> point_y;
    cout << "write x and y of the first corner\n";
    cin >> x1 >> y1;
    cout << "write x and y of the second corner\n";
    cin >> x2 >> y2;
    if( (point_x > x1) && (point_y < y1) && (point_x < x2) && (point_y > y2) ){
        cout << "the point is in a square\n";

    }
    else {
        cout << "the point is not in the square\n";

    }
}

