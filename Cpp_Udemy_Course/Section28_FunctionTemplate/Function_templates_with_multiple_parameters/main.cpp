#include <iostream>

template <typename ReturnType, typename T, typename P> ReturnType maximum(T a, P b);

int main(){

    int max1 = maximum<int,char,long>('c',12L);
    std::cout << "max1 : " << max1 << std::endl;

    int max2 = maximum<int,char> ('a', 1345L);
    std::cout << "max2 : " << max2 << std::endl;

    int max3 = maximum<int>('z', 13L);
    std::cout << "max3 : " << max3 << std::endl;

    return 0;
}

template<typename ReturnType, typename T, typename P> ReturnType maximum(T a, P b){
    return (a > b) ? a : b;
}