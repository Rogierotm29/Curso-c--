#include <iostream>

void func_floating_point(double d){
    std::cout << "floating point func..." << std::endl;
}
void func_integral(int i){
    std::cout << "integral algo.." << std::endl;
}

template <typename T>
void func(T t)
{
    if constexpr(std::is_ntegral_v<T>){
        func_integral(t);
    }else if constexpr(std::is_floating_point_v<T>){
        func_floating_point(t);
    }else{
        static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>,
        "Argument must be integral or floating point");
    }
}
int main(){

    return 0;
}