#include <iostream>


int main(){

    auto func = [] <typename T, typename U> (T a, U b){
        return a + b;
    };

    std::cout << func(10,20.5) << std::endl;


    return 0;
}