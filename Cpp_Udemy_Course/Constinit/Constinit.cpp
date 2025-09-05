#include <iostream>

const int val1 {33};
constexpr int val2 {34};
int val3 {35};

// constinit variables deben estar en scope global
// constinit int age = 88;       // ✅ válido
//constinit int age1 = val1;    // ✅ válido
// constinit int age2 = val3;    // ✅ válido
//constinit double weight = 33.33; // ✅ válido

int main(){
    //std::cout << "age: " << age << std::endl;
    //std::cout << "age1: " << age1 << std::endl;
    //std::cout << "age2: " << age2 << std::endl;
    //std::cout << "weight: " << weight << std::endl;
    return 0;
}
