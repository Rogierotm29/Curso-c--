#include <iostream>
using namespace std;


int main(){

    const size_t COUNT {10};
    size_t  i {0}; //Iterator declaration

    while (i < COUNT){ //Test
        cout << "I love C++ " << endl;
        ++i; //Incrementation
    }
}