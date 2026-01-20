#include <iostream>

template <typename ReturnType = double, typename T, typename P>
ReturnType maximum (T a, P b);

//can also specify the default last, or anywhere really
template <typename T, typename P, typename ReturnType = double>
ReturnType minimum (T a, P b){
    return (a < b)? a : b;
}

int main(){

    auto max1 = maximum(10,20);
    std::cout << "max1 : " << max1 << std::endl; //will be double
    std::cout << "size of max1 : " << sizeof(max1) << std::endl;

    //If we return type to be int, we can specify explicit template arg
    auto max2 = maximum<int>(10,20);
    std::cout << "max2 : " << max2 << std::endl;
    std::cout << "size of max2 : " << sizeof(max2) << std::endl;

    auto min3 = minimum<int,int,int> (10,20);
    std::cout << "min3 : " << min3 << std::endl;
    std::cout << "size of min3 : " << sizeof(min3) << std::endl;


    return 0;
}


template <typename ReturnType, typename T, typename P>
ReturnType maximum(T a, P b){
    return (a > b)? a : b;
}