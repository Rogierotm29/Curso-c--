#include <iostream>

auto process_number(int value){
    if(value < 10){
        return 22; //returning int literal
    }else{
        return 55;
    }
}

int main(){


    auto result = process_number(7);

    std::cout << "result : " << result << std::endl;


    return 0;
}