#include <iostream>
#include <bitset>
using namespace std;

int main(){
    unsigned short int value {0xff0u};

    cout << "value: " << bitset<16>(value) <<", dec : " << value << endl;

    cout << endl;
    cout <<"Shifting right >>>>> " << endl;

    //shift right 1 bit position
    value = static_cast<unsigned short int>(value >> 1);
    cout <<"value: " << bitset<16>(value) <<", dec : " << value 
    << " [After shift 1 bit position right]" << endl;

    cout << endl;
    cout << "Shifting left <<<<< " << endl;
    //shift left 4 bit positions
    value = static_cast<unsigned short int>(value << 4);
    cout << "value : " << bitset<16>(value) << ", dec : " << value
    << " [After shift 4 bit position left]" << endl;



}