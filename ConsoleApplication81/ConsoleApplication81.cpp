

#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
const int masssize = 10;

double plus_count = 0, minus_count = 0, sum = 0, closest_to_mid_arith;
double mid_arith, sum_between = 0;
int mas[masssize];

    int mas_create(int mas[]) {
        cout << "array: \n";

        srand(time(0));                          //создание массива
        for (int i = 0; i < masssize; i++) {
            mas[i] = rand() % 61 - 30;
            cout << mas[i] << ";";
        }
        return 0;
    }

    int pl_min(int mas[]){                        //функция, считающая кол-во отрицательных и полож. элементов в массиве
        for (int i = 0; i < masssize; i++) {
            if (mas[i] > 0) {
                plus_count++;
            }
            else {
                minus_count++;
            }
        }
        return plus_count, minus_count;
    }

    int mid_ari(int mas[]) {                         //функция сренего  арифметического
        for (int i = 0; i < masssize; i++) {
            sum = sum + mas[i];
        }
        mid_arith = sum / masssize;
        return mid_arith;
    }

    int summ(int mas[]) {                               //ф суммы м\у первым и последним
        for (int i = 1; i < masssize - 1; i++) {
            sum_between = sum_between + mas[i];
        }
        return sum_between;
    }

    int closest_to_mid(int mas[]) {
        for (int a = 0; a < masssize; a++) {
            for (int i = 0; i < masssize - 1; i++) {
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
        return 0;
    }

    int ar_diag(int mas[]) {
        int minimal_element;
        for (int i = 0; i < masssize; i++) {
            if (mas[i + 1] >= mas[i]) {
                minimal_element = abs(mas[i]);
                if (mas[i + 2] > mas[i]) { break; }
            }
        }

        cout << "\narray diagramm: \n";

        for (int i = 0; i < masssize; i++) {//выбирает число в массиве для которого будет строиться строка графика
            int number_of_symblos = minimal_element;//число знаков в строке до середины равно модулю минимального числа

            if (mas[i] < 0) {
                int difference = minimal_element - abs(mas[i]);//колво пробелов в строке
                for (int number_of_nothing = 0; number_of_nothing < difference; number_of_nothing++) {//выводит пробелы
                    cout << " ";
                }
                for (int number_of_stars = 0; number_of_stars < abs(mas[i]); number_of_stars++) {
                    cout << "*";
                }
                cout << "|" << endl;
            }
            else {
                for (int i = 0; i < minimal_element; i++) {
                    cout << " ";
                }
                cout << "|";

                for (int number_of_stars = 0; number_of_stars < abs(mas[i]); number_of_stars++) {
                    cout << "*";
                }
                cout << endl;
            }

            if (mas[i] = 0) {

            }

        }
        return 0;
    }

int main() {
    ////////////////////////////////////////	
    mas_create(mas);
    ////////////////////////////////////////////
    pl_min(mas);                                                           //функция, считающая кол-во отрицательных и полож. элементов в массиве
    cout << endl << "number of elements > 0: " << plus_count << endl;
    cout << "number of elements < 0: " << minus_count << endl;
    ///////////////////////////////////////////////    
    mid_ari(mas);                                                    //функция сренего  арифметического
    cout << "middle arithmetic: " << mid_arith << endl;
    /////////////////////////////////////////////////////
    summ(mas);                                                 //ф суммы м\у первым и последним
    cout << "sum between 1th and 10th: " << sum_between << endl;

    /// /////////////////////////////////////////////
    closest_to_mid(mas);                                    // ф ближайшего к средн арифм
    /// //////////////////////////////////////////////////////////////////////
    ar_diag(mas);
   
    /// ///////////////////////////////////////////////////////////////////////////

}