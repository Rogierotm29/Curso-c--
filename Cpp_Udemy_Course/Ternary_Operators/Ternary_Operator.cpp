#include <iostream>
using namespace std;


int main(){

    int max {};

    int a{35};
    int b{20};

    cout << endl;
    cout << "Using regular if " << endl;

    /*
    if( a > b){
        max = a;
    }
    else{
        max = b;
    }


    cout << "max : " << max << endl;
    */

    max = (a > b) ? a : b; //Deben ser del mismo tipo las options.
    cout << "max : " << max << endl;


    //Ternary Iitialization
    cout << endl;
    cout << "Speed" << endl;
    bool fast = false;

    int speed {fast ? 300 : 150};

    cout << "The speed is : " << speed << endl;



}