#include <iostream>
#include <concepts>

template <typename T>
concept Multipliable = requires (T a, T b){
    a + b;
};

template <typename T>
requires Multipliable<T>
auto multiply (T a, T b){
    return a * b;
};

int main(){

    int a{10};
    int b{32};

    auto result = multiply(a,b);

    std::cout << "a * b : " << result << std::endl;

    return 0;
}