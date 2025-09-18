#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main(){

    const int COLUMN_WIDTH {20};
    cout << endl;
    cout <<"Compound bitwise assignment operators" << endl;

    unsigned char sandbox_var {0b00110100}; // 52 en decimal

    //Print out initial value
    cout << endl;
    cout <<"Initial value: "  << endl;
    cout << setw(COLUMN_WIDTH) << "sandbox_var: " << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var) << endl;
    cout << endl;

    //Compound left shift
    cout << endl;
    cout <<"Shift ledt 2 positions in place : " << endl;
    sandbox_var <<= 2; // Equivalente a sandbox_var = sandbox_var << 2;
    cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var) << endl;
    cout << endl;

    //Compound right shift
    cout << endl;
    cout <<"Shif right 4 bit positions in place : " << endl;
    sandbox_var >>= 4; // Equivalente a sandbox_var = sandbox_var >> 4;
    cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var) << endl;
    cout << endl;



}