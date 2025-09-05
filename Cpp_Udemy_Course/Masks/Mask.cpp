#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;


int main(){


    //Highlight position for bit of interest with a 1
    //Mask other positions with 0
    const int COLUMN_WIDTH {20};


    const unsigned char mask_bit_0 {0b00000001} ; //Bit0
    const unsigned char mask_bit_1 {0b00000010} ; //Bit1
    const unsigned char mask_bit_2 {0b00000100} ; //Bit2
    const unsigned char mask_bit_3 {0b00001000} ; //Bit3
    const unsigned char mask_bit_4 {0b00010000} ; //Bit4
    const unsigned char mask_bit_5 {0b00100000} ; //Bit5
    const unsigned char mask_bit_6 {0b01000000} ; //Bit6
    const unsigned char mask_bit_7 {0b10000000} ; //Bit7

    unsigned char var {0b00000000}; //Starts off all bits off

    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

    //SETTING BITS
    //Setting : |= with mask of the bit

    //Set bit 1
    cout << "Serring bit in position 1" << endl;
    var |= mask_bit_0;
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

    //Set bit 5
    cout << "Setting bit in position 5" << endl;
    var |= mask_bit_5;
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;


}