#include <iostream>

int sum_up_to_zero(int value){
    if(value!=0){
        return value + sum_up_to_zero(value-1);
    }
    return 0;
}

int main(int argc, char **argv){
    
    std::cout << "sum : " << sum_up_to_zero(3) << std::endl;

    return 0;
}