#include <iostream>

constexpr int get_value(int multiplier){
    return 3 * multiplier;
};

int main(){
    constexpr int result = get_value(10); 
    std::cout << "Result: " << result << std::endl;


    int b{5};
    int val2 = get_value(b);
    std::cout << "val2 : " << val2 << std::endl;
    return 0;
}