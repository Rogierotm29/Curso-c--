#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;



int main(){
    const unsigned int red_mask {0xFF000000};   // Máscara para el canal rojo
    const unsigned int green_mask {0x00FF0000}; // Máscara para el canal verde
    const unsigned int blue_mask {0x000FF00};  // Máscara para el canal azul
    const unsigned int alpha_mask {0x000000FF}; // Transparecy information



    unsigned int my_color {0xAABCDE00};

    //We shift to make sure the color byte of interest is int the 
    //lower index byte position so tat we can interpret that as an integer,
    //wich will be between 0 and 255.

    //Set some format options
    cout << hex << showbase << endl;

    cout << "Red is : " << ((my_color & red_mask) >> 24 ) << endl;
    cout << "Green is : " << ((my_color & green_mask) >> 16 ) << endl;
    cout << "Blue is : " << ((my_color & blue_mask) >> 8 ) << endl;
    cout << "Alpha is : " << ((my_color & alpha_mask) >> 0 ) << endl;
}