#include <iostream>

void print_out(const int & int_value){
    std::cout << "Int value : " << int_value << std::endl;
}

void increment(int & int_value){
    int_value++;
}
int main(){

    int int_value{12};
    double double_value{52.7};

    //passing in int arguments
    std::cout << "Passing in int argument : " << std::endl;

    print_out(int_value);
    increment(int_value);
    print_out(int_value);



    print_out(double_value);
    print_out(double_value);


    return 0;
}