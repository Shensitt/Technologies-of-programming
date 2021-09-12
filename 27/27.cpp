/*Задание 2–7. [Монеты]
Ввести с клавиатуры целое число S – сумму денег (от 1 до 100).
Рассчитать и напечатать минимальное число монет достоинством 
1, 2, 5 и 10 рублей, необходимое для выдачи суммы S рублей.
*/
#include <iostream>
using namespace std;

int main()
{
	int amount, one, two, five, ten;
	cout << "write the amount of money\n";
	cin >> amount;

	ten = amount / 10;
	five = (amount % 10) / 5;
	two = (amount % 5) / 2;
	one = amount-ten*10-five*5-two*2;

	cout << "this is an amount of 10s,5s,2s and 1s:\n";
	cout << ten << endl << five << endl << two << endl << one << endl;
}

