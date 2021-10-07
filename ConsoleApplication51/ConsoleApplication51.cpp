/*Задание 5–1. [Игра «Угадайка»]
Компьютер загадывает случайное число в диапазоне от 0 до 100.
Человек вводит своё предположение.
В ответ компьютер выдаёт одно из 
трёх возможных сообщений:
«ваше число больше»,
«ваше число меньше»
или «вы угадали».
Игра продолжается до тех пор,
пока число, загаданное компьютером, не будет угадано.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int number,character;

int main(){

	character = (rand() % 100);

	cout << "write a number from 0 to 100" << endl;
	cin >> number;

	while (number!=character){

			if (number < character) {
				cout << "your number is less than created by computer" << endl;
			}
			if (number > character) {
				cout<< "your number is bigger than created by computer" << endl;
			}
			cout << "try different number" << endl;
			cin >> number;
		}

	cout << "You got it!" << endl;
}
	

