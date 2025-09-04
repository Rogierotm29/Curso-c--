#include <iostream>
using namespace std;


int main(){

    //+,-,*,/,%
    cout <<5+2<<endl;
    cout <<5-2<<endl;
    cout <<5*2<<endl;
    cout <<5.0/2.0<<endl;
    cout <<5%2<<endl;

    //++,--
    //estos sirven para incrementar o decrementar en 1
    int counter = 7;
    counter++;
    cout << counter << endl; // 8
    counter--;
    cout << counter << endl; // 7

    int counter2 = 7;
    cout << ++counter2 << endl; // 8 (pre-increment)
    cout << counter2-- << endl; // 8 (post-decrement)
    cout << counter2 << endl; // 7 (after post-decrement)

    //+=,-=,*=,/=,%=
    int number = 10;
    number += 5; // number = number + 5
    cout << number << endl; // 15
    number -= 3; // number = number - 3
    cout << number << endl; // 12
    number *= 2; // number = number * 2
    cout << number << endl; // 24
    number /= 4; // number = number / 4
    cout << number << endl; // 6


    //<,> <=, >=, == , !=
    int a = 5, b = 5;
    cout << (a > b)<<endl; // false (0)

    system("cls");

    //&&, ||, !
    bool condition1 = true;
    bool condition2 = false;
    cout << (condition1 && condition2) << endl; // false (0)
    cout << (condition1 || condition2) << endl; // true (1)
    cout << (!condition1) << endl; // false (0)
    cout << !(condition1 || condition2)<<endl; //false (0)
    
    system("pause>0");

}