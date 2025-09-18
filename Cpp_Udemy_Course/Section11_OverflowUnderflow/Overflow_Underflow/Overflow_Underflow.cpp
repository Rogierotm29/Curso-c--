#include <iostream>
using namespace std;


int main(){
    // overflow y underflow
    unsigned char uc1 {250};
    cout << "uc1: " << static_cast<int>(uc1) << endl;

    uc1 = uc1 + 10; // overflow
    cout << "uc1: " << static_cast<int>(uc1) << endl;

    signed char sc1 {120};
    cout << "sc1: " << static_cast<int>(sc1) << endl;

    sc1 = sc1 + 10; // overflow
    cout << "sc1: " << static_cast<int>(sc1) << endl;

    sc1 = sc1 - 300; // underflow
    cout << "sc1: " << static_cast<int>(sc1) << endl;

    return 0;

}