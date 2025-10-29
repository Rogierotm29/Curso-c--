#include <iostream>
#include <string>

int main(){
    std::string str1 {"Hello there"};

    //size of a string : doesn't count the null terminator
    std::cout << "str1.size() : " << str1.size() << std:: endl;

    //Regular idnex loop. Can also be adapted to use while and do-while
    std::cout << std::endl;
    std::cout << "For loop with array index notation : " << std::endl;

    std::cout << "str1(for loop) : ";
    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1[i];
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Using the std::string::at() method : " << std::endl;

    std::cout << "str1 : (for loop with at()) : ";
    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1.at(i);
    }
    std::cout << std::endl;

    //Front and back : Get the first or last character
    //Front and back return references

    std::cout << std::endl;
    std::cout << "Front and back : " << std::endl;

    std::string str2{"The phoenix King"};

    std::cout << "str2 : " << str2 << str2 << std::endl;

    //If we store the return value in a raw variable,
    //we are making a copy of the return value
    std::cout << std::endl;
    std::cout << "Store return value in raw char variables : " << std::endl;
    char front_char = str2.front();
    char back_char = str2.back();
    std::cout << "The front char in str2 is : " << front_char << std::endl;
    std::cout << "The back char in str2 is : " << back_char << std::endl;

    //Modify we're modifying copies of data returned from the front and back 
    front_char ='.';
    back_char = 'o';
    std::cout << "str2 after modification(copies) : " << str2 << std::endl;

    //If we store return values in references, we can se them to modify
    // actual data in the string. Remember that references are true aliases of the data refered to
    std::cout << std::endl;
    std::cout << "Store return value in references : " << std::endl;

    char& front_char_ref = str2.front();
    char& back_char_ref = str2.back();

    //Modify with references
    front_char_ref ='.';
    back_char_ref = 'o';
    std::cout << "str2 after modification(references) : " << str2 << std::endl;

    //can even modify directly from calls to front and back
    std::cout << std::endl;
    std::cout << "Modify directly through calls to front() and back() : " << std::endl;
    str2.front() = 'f';
    str2.back() = '$';
    std::cout << "str2 after direct modification(references) : " << str2 << std::endl;

    //c_str method
    //returns const char* to the wrapped string. You shoudn't use
    //it to modify data in the string

    std::cout << std::endl;
    std::cout << "Using c_str() to get wrapped C-string(returns const char*): " << std::endl;

    str2 = "The Phoenix King";
    const char* wrapped_c_string = str2.c_str();
    std::cout << "Wrapped c string : " << wrapped_c_string << std::endl;

    //data method
    std::cout << std::endl;
    std::cout << "Using data(0 to get wrapped C-string: ) " << std::endl;
    str2 = "Hellos World";

    char* data = str2.data();
    std::cout << "Wrapped c string : " << data << std::endl;

    data[0] = 'B'; //This also changes std::string.

    std::cout << "Wrapped c string (after modification) : " << data << std::endl;
    std::cout << "Original string (after modification) : " << str2 << std::endl;

    return 0;
}