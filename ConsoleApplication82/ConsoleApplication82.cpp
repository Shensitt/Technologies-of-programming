#include <iostream>
using namespace std;

/*Задание 8–2. [Числа Фибоначчи]*/
/*Ввести с клавиатуры целое число N(N>0).
Написать функции fib_rec() и fib() 
для вычисления N-го числа Фибоначчи рекурсивным и нерекурсивным методом.
Определить максимальное число N, для которого можно правильно вычислить результат, 
помещающийся в типе int. 
Числа Фибоначчи определяются следующим образом: 
f (1) = f (2) = 1;  
f (n+2) = f (n) + f (n+1),  
вот начало этого ряда: 1, 1, 2, 3, 5, 8, 13…
*/
int n;
int ans;


    int fib_rec(int n) {
        
        
        if (n == 1 || n == 2) {
            return 1;
        }
        else{
            ans = fib_rec(n - 1) + fib_rec(n - 2);
            return ans;
            
        }
        
    }

    int fib(int n) {
        int f1 = 1,f2=1,f3;

        if (n == 1 || n == 2) {
            cout << "1";
            return 0;
        }
        else {
            for (int i = 3; i <= n; i++) {
                f3 = f1 + f2;
                ans = f3;
                f1 = f2;
                f2 = f3;
            }
            cout << ans;
            return 0;
        }
    }

int main(){
    cout << "write a number\n";
    cin >> n;
    
                           //ввод номера число фибоаччи
    cout << "Fibonacchi number: " << endl;
    fib(n);

    cout << "\nFibonacchi number with recursion: \n";
    fib_rec(n);
    cout << ans;
    

}
