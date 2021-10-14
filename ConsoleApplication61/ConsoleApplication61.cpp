/*Задание 6–1. [Работа с массивом]
а) Заполнить массив из 10 элементов случайными целыми числами в диапазоне [–30; 30]
и напечатать их в одну строку.
б) Подсчитать количество положительных и отрицательных элементов в массиве.
в) Найти среднее арифметическое значений массива и определить в массиве значение,
ближайшее к среднему арифметическому.
г) Подсчитать сумму элементов в массиве между максимальным и минимальным 
(не включая сами границы).
д) Построить горизонтальную гистограмму: 
ось нулевых значений проходит в центре экрана сверху вниз, 
отрицательные значения откладывать влево, положительные – вправо:
     Значения элементов массива = {-5, -6, 6, -4, 8, -2}         
                 *****|
                ******|
                      |******
                  ****|
                      |********
                    **|
*/
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
const int masssize = 10;
//const int mass_big = 11;
double plus_count = 0, minus_count = 0, sum = 0, closest_to_mid_arith;
double mid_arith, sum_between = 0;

int main() {
    ////////////////////////////////////////	
    int mas[masssize];
    cout << "array: \n";

    srand(time(0));
    for (int i = 0; i < masssize; i++) {
        mas[i] = rand() % 61 - 30;
        cout << mas[i] << ";";
    }
    ////////////////////////////////////////////
    for (int i = 0; i < masssize; i++) {
        if (mas[i] > 0) {
            plus_count++;
        }
        else {
            minus_count++;
        }
    }
    ////////////////////////////////////////////
    cout << endl << "number of elements > 0: " << plus_count << endl;
    cout << "number of elements < 0: " << minus_count << endl;
    ///////////////////////////////////////////////    
    for (int i = 0; i < masssize; i++) {
        sum = sum + mas[i];
    }
    mid_arith = sum / masssize;
    cout << "middle arithmetic: " << mid_arith << endl;
    /////////////////////////////////////////////////////
 for (int i = 1; i < masssize - 1; i++) {
        sum_between = sum_between + mas[i];
    }

   
    /// /////////////////////////////////////////////
  
    for (int a = 0; a < masssize; a++) {
        for (int i = 0; i < masssize-1; i++) {
            int t;
            if (mas[i + 1] <= mas[i]) {
                t = mas[i + 1];
                mas[i + 1] = mas[i];
                mas[i] = t;
            }
        }
    }
    for (int i = 0; i < masssize; i++) {
        if (mas[i] == mid_arith) {
            closest_to_mid_arith = mas[i];
            cout << "closest to middle arithmetic: " << closest_to_mid_arith << endl;
        }
        else {
            if (mas[i] > mid_arith) {
                cout << "closest to middle arithmetics are: \n" << mas[i - 1] << " and " << mas[i] << endl;
                if (mas[i + 1 > mid_arith]) { break; }
            }
        }
    }


    cout << "sum between 1th and 10th: " << sum_between << endl;
    //cin>>sum;



    /// //////////////////////////////////////////////////////////////////////

    int minimal_element;
    for (int i = 0; i < masssize ; i++) {
        if (mas[i + 1] >= mas[i]) {
            minimal_element = abs(mas[i]);
            if (mas[i + 2] > mas[i]) { break; }
        }
    }
   // cout << minimal_element;
    cout << "\narray diagramm: \n";

    for (int i = 0; i < masssize ; i++) {//выбирает число в массиве для которого будет строиться строка графика
        int number_of_symblos = minimal_element;//число знаков в строке до середины равно модулю минимального числа
        
        if (mas[i] < 0) {
            int difference = minimal_element - abs(mas[i]);//колво пробелов в строке
            for (int number_of_nothing = 0; number_of_nothing < difference; number_of_nothing++) {//выводит пробелы
                cout << " ";
            }
            for (int number_of_stars = 0; number_of_stars < abs(mas[i]); number_of_stars++) {
                cout<<"*";
            }
            cout<<"|"<<endl;
        }
        else {
            for (int i = 0; i < minimal_element; i++) {
                cout << " ";
                }
                cout << "|" ;

            for (int number_of_stars = 0; number_of_stars < abs(mas[i]); number_of_stars++) {
                cout << "*";
            }
            cout << endl;
        }

        if (mas[i] = 0) {
            
        }
       
    }

    
   



   
    /// ///////////////////////////////////////////////////////////////////////////
   
   

}
