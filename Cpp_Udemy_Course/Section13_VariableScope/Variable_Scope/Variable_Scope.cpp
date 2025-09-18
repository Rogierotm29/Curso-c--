#include <iostream>
using namespace std;

int globar_var {45};


int main(){

    bool green {false};

    if(green){
        int car_count{23};
        cout << "Light is green " << car_count << " on the move! " << endl;
    }else{
        //car_counter; // Compiler error
        cout << "Light is not green. Ya'll should STOP! " << endl;
    }

    // car_count++ the variable is not defined in the scope, so this 
    //will give a compiler error
}