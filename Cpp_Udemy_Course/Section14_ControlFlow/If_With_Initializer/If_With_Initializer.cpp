#include <iostream>
using namespace std;



int main(){
    int speed{10};

    bool go {false};

    /*
    if(go){
        if(speed > 5){
            cout << "Slow down! " << endl;
        }else {
            cout << "All good! " << endl;
        }
    }else{
        cout << "Stop " << endl;
    }

    cout << "Speed : " << speed << endl;
    */


    //With if initializer
    if(int high_speed{30};go){
        if (high_speed > 5){
            cout << "Slow down ";
        }else{
            cout << "All good!";
        }
    }else{
        cout << "high_speed: " << high_speed << endl;
        cout << "Stop" << endl;
    }
}