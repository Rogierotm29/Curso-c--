#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    std::string hello_str {"Hello"};
    std::string bello_str{"Bello"};

    //Using the comparison operators
    std::cout << std::endl;
    std::cout << "Comparing with comparison operators : " << std::endl;

    std::cout << std::boolalpha;
    std::cout << hello_str << "==" << bello_str << " : " << (hello_str == bello_str) << std::endl;
    std::cout << hello_str << "!=" << bello_str << " : " << (hello_str != bello_str) << std::endl;
    std::cout << hello_str << ">" << bello_str << " : " << (hello_str > bello_str) << std::endl;
    std::cout << hello_str << ">=" << bello_str << " : " << (hello_str >= bello_str) << std::endl;
    std::cout << hello_str << "<" << bello_str << " : " << (hello_str < bello_str) << std::endl;
    std::cout << hello_str << "<=" << bello_str << " : " << (hello_str <= bello_str) << std::endl;


    //Can even compare std::strings to C-strings
    const char* c_string1 {"hello"};

    std::cout << std::endl;
    std::cout << "Comparing std::string to C-string : " << std::endl;
    std::cout << "hello_str.size() : " << hello_str.size() << std::endl;
    std::cout << "std::strlen(c_string1) : " << std::strlen(c_string1) << std::endl;
    std::cout << hello_str << "==" << c_string1 << " (c_string) : " << (hello_str == c_string1) << std::endl;
    std::cout << c_string1 << " (C-String) ==" << hello_str << " : " << (c_string1 == hello_str) << std::endl;
    std::cout << c_string1 << " (C-String) >=" << hello_str << " : " << (c_string1 >= hello_str) << std::endl;
    std::cout << c_string1 << " (C-String) <" << hello_str << " : " << (c_string1 < hello_str) << std::endl;


    return 0;
}