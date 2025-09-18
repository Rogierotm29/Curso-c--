#include <iostream>
using namespace std;



int main(){
    int increment {5};
    int number1 {10};
    int number2 {20};
    int number3 {25};
    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);

    cout << "number1 : " << number1 << endl; //60
    cout << "number2 : " << number2 << endl; //20
    cout << "number3 : " << number3 << endl; //33
    cout << "result : " << result << endl; //33
}