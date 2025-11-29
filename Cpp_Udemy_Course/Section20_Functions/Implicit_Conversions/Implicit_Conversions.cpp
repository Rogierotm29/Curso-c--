#include <iostream>

void print_sum(int a, int b){

    int sum = a + b;
    std::cout << "sizeof(a) : " << sizeof(a) << std::endl;
    std::cout << "sizeof(b) : " << sizeof(b) << std::endl;
    std::cout << "sum : " << sum << std::endl;
    std::cout << std::endl;
}

int main(){
    int a{10};
    int b{20};

    double c{30.0};
    double d{40.0};

    print_sum(a,b);
    print_sum(c,d);
    return 0;
}