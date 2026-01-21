#include <iostream>


template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multipliable = requires (T a, T b){
    a * b; //Just makes sure the syntax is valid
};

//Syntax 1
template <typename T>
requires MyIntegral<T>
T add_1(T a, T b){
    return a + b;
}

//Syntax 2
template <MyIntegral T>
T add_2(T a, T b){
    return a + b;
}

template <typename T>
requires Multipliable<T>
T add_3 (T a, T b){
    return a + b;
}

template <typename T>
concept Incrementable = requires (T a){
    a += 1;
    ++a;
    a++;
};


int main(){

    int x{15};
    int y{32};

    double a{23};
    double b{42};

    //char c {'R'};

    //std::string d {"Rogiero"};

    auto result = add_1(x,y);
    auto result_a = add_3(a,b);

    std::cout << "result : " << result << std::endl;

    std::cout << "result_2 : " << result_a << std::endl;



    return 0;
}