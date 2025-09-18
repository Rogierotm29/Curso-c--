#include <iostream>
using namespace std;


int main(){

    /*
    for(unsigned int i{0}; i < 10; i++){
        cout << "I love C++" << endl;
    }
    */

    //Use size_t :a representation of some unsigned int for positive numbers [sizes]

    for(size_t i{0} ; i < 10; ++i){
        cout << i << " : I love C++"<< endl;
        
    }

    return 0;
}