/*
Задание 5–2. [Игра «Угадайка–2»]
Человек загадывает случайное число в диапазоне от 0 до 100.
Компьютер выводит своё предположение.
В ответ человек вводит один из 3-х символов,
означающих: «моё число больше», «моё число меньше»
или «компьютер угадал». Игра продолжается до тех пор,
пока число, загаданное человеком, не будет угадано.
Реализовать стратегию отгадывания числа компьютером:
метод половинного деления или выбор случайного числа.
*/
#include <iostream>
#include<cstdlib>
using namespace std;
int number, pc_character,your_write;

int main()
{
    cout << "write random number from 0 to 100 " << endl;
    cin >> number;
    cout << "computer will try to get your number by random\n";
    cout << "after it writes the number you should type: \n";
    cout << "<3> when your number is bigger than computer's\n";
    cout << "<1> when your number is less than computer's \n";
    cout << "<2> when your number is same with computer's\n";
pc_character = (rand() % 100);
  do{   
        
             cout << "computer thinks your number is: " << pc_character << endl;
             cout << "give your answer" << endl;
             cin >> your_write;

             if (your_write == 1) {
                 do {
                     pc_character = (rand() % 100);
                 } while (pc_character > number);

             }
             if (your_write == 3) {
                 do {
                     pc_character = (rand() % 100);
                 } while (pc_character < number);
             }
            
    }while(your_write != 2);
    cout << "computer got your number! it is " << number << endl;
}