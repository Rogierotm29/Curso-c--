#include <iostream>

template <typename T> T& maximum (T& a, T& b);

int main(){

    double a {23.5};
    double b {52.2};

    std::cout << "Out - &a: " << &a << std::endl;
    double max1 = maximum(a, b);
    std::cout << "max1 : " << max1 << std::endl;
    std::cout << b;

    return 0;
}

template <typename T> T& maximum (T& a, T& b){
    std::cout << "In - &a : " << &a << std::endl;
    --b;
    return (a > b) ? a : b;
}