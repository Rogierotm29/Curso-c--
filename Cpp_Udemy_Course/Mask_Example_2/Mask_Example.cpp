#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

const unsigned char mask_bit_0 {0b00000001} ; //Bit0
const unsigned char mask_bit_1 {0b00000010} ; //Bit1
const unsigned char mask_bit_2 {0b00000100} ; //Bit2
const unsigned char mask_bit_3 {0b00001000} ; //Bit3
const unsigned char mask_bit_4 {0b00010000} ; //Bit4
const unsigned char mask_bit_5 {0b00100000} ; //Bit5
const unsigned char mask_bit_6 {0b01000000} ; //Bit6
const unsigned char mask_bit_7 {0b10000000} ; //Bit7


void use_options_v0 (bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool falg5, bool falg6, bool flag7){
    cout <<"Flag0 is : " << flag0 <<", do something with it. " << endl;
    cout <<"Flag1 is : " << flag1 <<", do something with it. " << endl;
    cout <<"Flag2 is : " << flag2 <<", do something with it. " << endl;
    cout <<"Flag3 is : " << flag3 <<", do something with it. " << endl;
    cout <<"Flag4 is : " << flag4 <<", do something with it. " << endl;
    cout <<"Flag5 is : " << falg5 <<", do something with it. " << endl;
    cout <<"Flag6 is : " << falg6 <<", do something with it. " << endl;
    cout <<"Flag7 is : " << flag7 <<", do something with it. " << endl;
    

}

void use_options_v1(unsigned char flags){
    cout <<"bit0 is : " << ((flags & mask_bit_0) >> 0)<<", do something with it. " << endl;
    cout <<"bit1 is : " << ((flags & mask_bit_1) >> 0) <<", do something with it. " << endl;
    cout <<"bit2 is : " << ((flags & mask_bit_2) >> 0) <<", do something with it. " << endl;
    cout <<"bit3 is : " << ((flags & mask_bit_3) >> 0) <<", do something with it. " << endl;
    cout <<"bit4 is : " << ((flags & mask_bit_4) >> 0) <<", do something with it. " << endl;
    cout <<"bit5 is : " << ((flags & mask_bit_5) >> 0) <<", do something with it. " << endl;
    cout <<"bit6 is : " << ((flags & mask_bit_6) >> 0) <<", do something with it. " << endl;
    cout <<"bit7 is : " << ((flags & mask_bit_7) >> 0) <<", do something with it. " << endl;

}

int main(){
    use_options_v0(0,0,1,1,1,0,1,0);
    cout << "---------------------------------------------------" << endl;
    use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);




    return 0;
}