#include <iostream>


//Simple requirements
template <typename T>
concept TinyType = requires ( T t){
    sizeof(T) <= 4; //Simple requirement : Only checks syntax
};

//Nested requirements
template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <= 4; //Simple requirement : Only checks syntax
    requires sizeof(T) <= 4; //Nested requirement : 
    //checks if the expression is true
};

//compound requirement
template <typename T>
concept Addable = requires (T a, T b){
    //nonexcept is optional
    {a + b} noexcept -> std::convertible_to<int>;
    //compound requirement checks if a + b is valid syntax
    //, doesn't throw expetions(optional), and the result
    //is convertible to int(optional)
};

int main(){


    return 0;
}