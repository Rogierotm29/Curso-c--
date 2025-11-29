#include <iostream>

void print_sum(int* param1, int* param2){
    std::cout << "sum : " << (*param1 + *param2) << std::endl;
}


int main(){

    int a{4};
    int b{5};

    double c{4.5};
    double d{5.5};

    print_sum(&a, &b);


    return 0;
}