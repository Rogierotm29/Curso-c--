#include <iostream>
#include <string>
#include <cstring>

int main(){
    //Compare(1)
    //int compare ( const basic_string& str) const noexcept; (1)
    //Compares this string to str

    std::cout << std::endl;
    std::cout << "std::string::compare() - (1) : " << std::endl;

    std::string str1{"Hello"};
    std::string str2{"World"};


    std::cout << "str1 : " << str1 << std::endl;
    std::cout << "str2 : " << str2 << std::endl;
    std::cout << "str1.comapre(str2) : " << str1.compare(str2) << std::endl;
    std::cout << "str2.comapre(str1) : " << str2.compare(str1) << std::endl;

    //Compare (2)
    //int compare( size_type pos1, size_type count1, const basic_string& str) const; (2)
    //Compares a substring of this string(from pos1, going count1 positions) to str

    std::cout << std::endl;
    std::cout << "std::string::compare() - (2) : " << std::endl;
    //Comparing the hello in string1 to the world in string3
    str1 = "Hello";
    std::string str3{"Hello World"};
    std::cout << "Comparing 'World' to 'Hello' : " << str3.compare(6,5,str1) << std::endl;


    //Compare (3)
    //int compare (const charT* s) const;(3)
    //Compares this string to the null-terminated character sequence beginning
    //at the character pointed to by s.
    std::cout << std::endl;
    std::cout << "std::string::compare() - (4) : " << std::endl;

    std::string str5{"Hello"};
    const char* message {"World"};
    std::cout << "Comparing Hello to World : " << str5.compare(message) << std::endl;
    std::cout << "Comparing Hello to World : " << str5.compare("World") << std::endl;


    return 0;
}