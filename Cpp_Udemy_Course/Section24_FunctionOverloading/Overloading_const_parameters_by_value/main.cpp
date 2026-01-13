#include <iostream>


int max(int a, int b);

int main(int argc, char ** argv){

    std::cout << "Hello World in C++20!" << std::endl;
    return 0;
}

int max(const int a, const int b){
    return (a > b)? a : b;
}