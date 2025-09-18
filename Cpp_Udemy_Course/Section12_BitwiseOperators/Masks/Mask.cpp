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
    cout << "Setting bit in position 1" << endl;
    var |= mask_bit_1;
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

    //Set bit 5
    cout << "Setting bit in position 5" << endl;
    var |= mask_bit_5;
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

    //Reseting bit position 1 and 5
    cout << "reseting bit position 1 and 5 " << endl;
    var &= ~(mask_bit_1 | mask_bit_5);
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

    //Set all bits
    cout << "Setting all bits" << endl;
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

    //Reseting bits 1 , 3 and 7
    cout << "Reseting bits 1 , 3 and 7" << endl;
    var &= ~(mask_bit_1 | mask_bit_3 | mask_bit_7);
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;


    //Check state of a bit
    cout << endl;
    cout << "Checking the state of each bit position (on/off)" << endl;
    cout <<"bit0 is " << ((var & mask_bit_0) >> 0) << endl;
    cout <<"bit1 is " << ((var & mask_bit_1) >> 1) << endl;
    cout <<"bit2 is " << ((var & mask_bit_2) >> 2) << endl;
    cout <<"bit3 is " << ((var & mask_bit_3) >> 3) << endl;
    cout <<"bit4 is " << ((var & mask_bit_4) >> 4) << endl;
    cout <<"bit5 is " << ((var & mask_bit_5) >> 5) << endl;
    

    cout <<"bit6 is " << ((var & mask_bit_6) >> 6) << endl;
    cout <<"bit6 is " << static_cast<bool>(var & mask_bit_6) << endl;

    cout << "bit7 is " << ((var & mask_bit_7) >> 7) << endl;
    cout<< "bit7 is " << static_cast<bool>( var & mask_bit_7) << endl;


    //Toggling bit 2
    cout << endl;
    cout << "Toggiling bit 2 " << endl;
    var ^= mask_bit_2;
    cout << setw(COLUMN_WIDTH) << "var : " << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;
    



}