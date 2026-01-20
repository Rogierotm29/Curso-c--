#include <iostream>

/*
template <typename T, typename P>
decltype(auto) func(T a, P b){
    return a + b;
}*/

auto func_add (auto a, auto b){
    return a + b;
}

int main(){
    auto result = func_add(10,20.0);
    std::cout << "result : " << result << std::endl;

    return 0;
}