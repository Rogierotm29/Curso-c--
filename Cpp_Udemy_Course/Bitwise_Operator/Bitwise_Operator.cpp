#include <iostream>
#include <bitset> // para std::bitset
#include <iomanip> // para std::setw
using namespace std;



int main(){
    const int COLUMN_WIDTH {20};

    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101

    cout << setw(COLUMN_WIDTH) << "value1: " << setw(COLUMN_WIDTH) << bitset<8>(value1) << endl;
    cout << setw(COLUMN_WIDTH) << "value2 : " << setw(COLUMN_WIDTH) << bitset<8>(value2) << endl;


    //AND
    cout << endl;
    cout << "Bitwise And : " << endl;
    cout << setw(COLUMN_WIDTH) <<"value1 & value2 : " << setw(COLUMN_WIDTH) << bitset<8>(value1 & value2) << endl;
    cout << endl;

}