#include <iostream>
#include <string>
#include <cstring>

int main(){
    //Number to string : std::to_string function

    std::cout << "Turning numbers into std::string : " << std::endl;
    float float_var {22.3f};
    double double_var {1.348447e5};
    int int_var {223};

    std::string float_str {std::to_string(float_var)};;
    std::string double_str {std::to_string(double_var)};;
    std::string int_str {std::to_string(int_var)};;

    std::cout << "size of float_str : " << float_str.size() << std::endl;
    std::cout << "float_var : " << float_var << std::endl;
    std::cout << "float_str : " << float_str << std::endl;

    std::cout << "double_var : " << double_var << std::endl;
    std::cout << "double_str : " << double_str << std::endl;

    std::cout << "int_var : " << int_var << std::endl;
    std::cout << "int_str : " << int_str << std::endl;

    //std::string number_str {"34.567"};
    std::string number_str{"-34.567"}; //Could even be negative

    //int, long, long long
    //std::stoi, std::stol, std::stoll
    std::cout << std::endl;
    std::cout << "int, long, long long : " << std::endl;

    int_var = std::stoi(number_str);
    std::cout << "int_var : " << int_var << std::endl;
    std::cout << "sizeof(int_var) : " << sizeof(int_var) << std::endl;

    long long_var = std::stol(number_str);
    std::cout << "long_var : " << long_var << std::endl;
    std::cout << "sizeof(long_var) : " << sizeof(long_var) << std::endl;

    long long long_long_var = std::stoll(number_str);
    std::cout << "long_long_var : " << long_long_var << std::endl;
    std::cout << "sizeof(long_long_var) : " << sizeof(long_long_var) << std::endl;

    return 0;
}