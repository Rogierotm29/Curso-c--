#include <iostream>
using namespace std;


int main(){
    int num1 {33};
    double num2 {55.55};

    // conversiones implícitas
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    num1 = num2; // double a int (pérdida de datos)
    cout << "num1: " << num1 << endl; // 55

    // conversiones explícitas (cast)
    num1 = static_cast<int>(num2); // double a int (pérdida de datos)
    cout << "num1: " << num1 << endl; // 55

    double num3 {};
    num3 = static_cast<double>(num1); // int a double (sin pérdida de datos)
    cout << "num3: " << num3 << endl; // 55.0

    return 0;
}