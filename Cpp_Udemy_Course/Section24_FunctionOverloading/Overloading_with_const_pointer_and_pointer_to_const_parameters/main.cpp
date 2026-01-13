#include <iostream>

int max(int* a, int* b){
    std::cout << "max with int* called " << std::endl;
    return (*a > *b)? *a : *b;
}

int max(const int* a, const int* b){
    std::cout << "max with const int* called " << std::endl;
    return(*a > *b)? *a : *b;
}

int main(){

    int a{10};
    int b{12};
    const int c{30};
    const int d{15};

    int maximum = max(&a, &b);
    std::cout << "max : " << maximum << std::endl;

    maximum = max(&c, &d);
    std::cout << "max : " << maximum << std::endl;

    return 0;
}