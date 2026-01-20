#include <iostream>

//Function template with decltype and trailing return type
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b)? a : b){
    return (a > b) ? a : b;
}


int main(){

    //Decltype : type of an expression
    int a{9};
    double b{5.5};

    std::cout << "size : " << sizeof(decltype((a > b)? a : b)) << std::endl;

    decltype((a > b) ? a : b) c{67};
    std::cout << "c : " << c << std::endl;

    auto max1 = maximum(a,b);
    std::cout << "max1 : " << max1 << std::endl;
    return 0; 
}