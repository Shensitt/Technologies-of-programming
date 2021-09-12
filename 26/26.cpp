/*Задание 2–6. [Квадратное уравнение]
Ввести с клавиатуры коэффициенты квадратного уравнения a, b, c.
Напечатать корни x1 и x2 или сообщение о том,
что корней не существует. 
Обработать ситуацию, когда a = 0. 
Все числа  считать вещественными (double).
*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, c,x1,x2,x, d;

	cout << "write a,b,c\n";
	cin >> a >> b >> c;

	if(a!=0){
  //  a* x1* x1 + b * x1 + c = 0;
	d = b * b - 4 * a * c;
	if (d>=0){
	x1 = (-b + sqrt(d)) / 2 * a;
	cout << "x1=" << x1;

	//a* x2* x2 + b * x2 + c = 0;
	x2 = (-b - sqrt(d)) / 2 * a;
	cout << "x2=" << x2;}
	else { cout << "d<0!!! - no answers\n"; }
	}

    else {// b* x1 + c = 0;
x = -c / b;
cout << "x=" << x;
}}