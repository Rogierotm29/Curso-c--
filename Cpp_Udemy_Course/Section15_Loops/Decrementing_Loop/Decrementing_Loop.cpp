#include <iostream>
using namespace std;



int main(){
    const size_t COUNT {5};

    cout << "Incrementing for loop : " << endl;
    for(size_t i{}; i < COUNT; ++i){
        cout << "i :  " << i << endl;
    }

    cout << endl;
    cout << "Decrementing for loop : " << endl;

    for(size_t i{COUNT}; i > 0; --i){
        cout << "i : " << i << endl;
    }

    //Ranged Based loop for increments
    cout << endl;
    cout << "Range based for loop always increments" << endl;
    //You gain some flexibility, loose some control.
    for(auto i : {1,2,3,4,5}){
        cout << "i : " << i << endl;
    }




    //Incrementing While
    cout << endl;
    cout << "Incrementing while " << endl;

    size_t i{0};

    while( i < COUNT){
        cout << "i : " << i << endl;
        ++i;
    }

    //Decrementing While
    cout << endl;
    cout << "Decrementing while : " << endl;
    i = COUNT;
    while (i > 0){
        cout << " i : " << i << endl;
        --i;
    }
}