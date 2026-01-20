#include <iostream>


int main(){
    int a {45};

    std::cout << std::boolalpha;
    std::cout << "is_integral<int> : " << std::is_integral<int>::value << std::endl;
    std::cout << "is_integral<double> : " << std::is_integral<double>::value << std::endl;
    std::cout << "is_floating_point<int> : " << std::is_floating_point<int>::value << std::endl;
    //std::cout << "is_inegral <a> : " << std::is_integral<a>::value std::endl;

    return 0;
}