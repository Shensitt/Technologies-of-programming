﻿/*Задание 3–2. [Таблица у = sin(x)]
Напечатать таблицу значений функции у = sin(x)
, где x изменяется от 0 до 180° с шагом 15.
Нарисовать разделительные линии и шапку таблицы.
Замечание: библиотечная функция sin(x) 
принимает значение угла в радианах, 
а не градусах (π радиан = 180°).
*/
#include <iostream>
using namespace std;

int main()
{
    double y; int x=0;
   
    cout << "y=sin(x)\n";
    cout << "x        " << "y   "<<endl<<endl;
    
    for (int x = 0; x <= 180; x = x + 15) {
         y = sin(x)/180;
        cout << x <<"   " << y<< "   "<<endl;
    }
}
