#include <iostream>
using namespace std;

int main(){

    /*
    //Try to allocate a insanely huge array in one go
    //Unhandled new failure : Crah
    int* lots_of_ints1 { new int[100000000000000000000000000]}; //May give an error about exceeeding array size


    //Use a huge loop to try and exhaust the memory capabilities
    //of your system. When new fails, your program is going to
    //forcefuly terminate.

    for(size_t i{}; i < 1000000000; ++i){
        int* lots_of_ints2 {new int [10000000]};
    }
    */



    return 0;
}