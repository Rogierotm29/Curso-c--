#include <iostream>

int sum (int a, int b){
    int result = a + b;
    std::cout << "In : &result(int) : " << &result << std::endl;
    return result;
}

int main(int argc, char* argv[]){
    int a {34};
    int b {16};

    int result = sum(a,b);
    std::cout << "Out : &result(int) : " << &result << std::endl;
    std::cout << "sum : " << result << std::endl;

    return 0;
}