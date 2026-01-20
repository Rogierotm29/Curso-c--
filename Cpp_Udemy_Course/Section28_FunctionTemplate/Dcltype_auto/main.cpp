#include <iostream>

//no sirve para hacer definicion y 
// luego declaracion abajo del main
template <typename T, typename P>
decltype(auto) maximum(T a, P b){
    return (a > b)? a : b;
}


int main(int argc, char ** argv){
    int a {9};
    double b{5.5};

    auto max1 = maximum(a , b);
    std::cout << "max1 : " << max1 << std::endl;

    return 0;
}