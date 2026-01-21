#include <iostream>

//This syntax constrains the auto parameters you pass in
//to comply with the std::integral concept
std::integral auto add( std::integral auto a, std::integral auto b){
    return a + b;
}


int main(){

    //constrain declared auto var
    std::integral auto x = add(10,20);
    //std::floating_point auto x = add(10,20); //compiler error
    std::cout << "x : " << x << std::endl;

    //std::integral auto y = 7.7;
    std::floating_point auto y = 7.7;
    std::cout << "y : " << y << std::endl;

    return 0;
}