#include <iostream>
using namespace std;


int main(){

    //break - for loop
    //break stops the loop all together and we fall outside the closing } of the loop
    cout << "Break - for loop: " << endl;
    for(size_t i{0}; i < 20; ++i){
        if( i == 6){
            break;
        }
        cout << "i : " << i << endl;
    }

    //Falls here after the break
    cout << "Loop is done" << endl;


    //Continue - for loop
    //Continue : skips a single iteration
    cout << endl;
    cout << "Contiue - for loop : " << endl;

    for(size_t i{0}; i < 20; ++i){
        if(i == 6){
            continue; //Skip the current iteration and go to the next one.
                      //Will cause for 6 not to be printed
        }
        cout << "i : " << i << endl;
    }

    size_t i{0};
    while(i < 20){
        if(i == 5){
            ++i;
            continue;
        }
        if(i == 12){
            break;
        }
        cout << "i : " << i << endl;

        ++i;
    }
    cout << "Loop donde " << endl;
}