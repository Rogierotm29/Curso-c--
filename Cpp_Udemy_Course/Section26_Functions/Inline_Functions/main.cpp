#include <iostream>

inline int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}


int main(int argc, char ** argv){

    int value1{34};
    int value2{60};

    std::cout << "max : " << max(value1, value2) << std::endl;


    return 0;
}