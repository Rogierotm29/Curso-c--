#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
};

template <typename T>
requires std::integral<T> || std::floating_point<T>
T add(T a, T b){
    return a + b;
};

template <typename T>
//T func(T t)requires std::integral<T> || std::floating_point<T>
//T func(T t) requires std::integral<T> && TinyType<T>
T func(T t) requires std::integral<T> && TinyType<T>{
    std::cout << "value : " << t << std::endl;
    return (2*t);
}


int main(){

    int x{10};
    int y{30};

    add(x,y);


    return 0;
}

