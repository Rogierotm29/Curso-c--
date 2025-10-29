#include <string>
#include <iostream>

int main(){

    std::string str1 {"Hello World"};
    std::string str2;
    std::string str3{};

    //Empty
    std::cout << std::endl;
    std::cout << "std::string::empty() : " << std::endl;
    std::cout << "str1 is empty : " << std::boolalpha << str1.empty() << std::endl;
    std::cout << "str2 is empty : " << std::boolalpha << str2.empty() << std::endl;
    std::cout << "str3 is empty : " << std::boolalpha << str3.empty() << std::endl;

    //Size
    std::cout << std::endl;
    std::cout << "std::string::size() : " << std::endl;
    std::cout << "str1 contains " << str1.size() << " characters" << std::endl;
    std::cout << "str2 contains " << str2.size() << " characters" << std::endl;
    std::cout << "str2 contains " << str3.size() << " characters" << std::endl;

    //Length : Same as size() method
    std::cout << std::endl;
    std::cout << "std::string::lenght() : " << std::endl;
    std::cout << "str1 contains " << str1.length() << " characters" << std::endl;
    std::cout << "str2 contains " << str2.length() << " characters" << std::endl;
    std::cout << "str3 contains " << str3.length() << " characters" << std::endl;

    //max_size : max number of characters a string can have on the system
    std::cout << std::endl;
    std::cout << "std::string::max_size() : " << std::endl;

    //Prints : 2147483647 on my system
    std::cout << "str1 maz size : A std::string can hold " << str1.max_size() << " characters" << std::endl;

    //Notice that the max size of a std string is the same number we were suggested as the max number of items
    // in an array when we tried out failed mamoy allocations with insanely huge array allocations as shown
    //below for a reminder.
    //int* huge_array = new int[1000000000000000]; //Will fail to compile and show the max array size
    //This may serve as a proof that std::string's are implemented as char* under the hood.

    //Capacity : current max number of characters you can store in the string
    //A capacity is allocated by default. When you try to store in more characters than the current
    //capacity can handle, std::string automatically allocates new (larger) memory space to store the larger string
    

    //Shrink_to_fit
    std::cout << std::endl;
    std::cout << "shrink_to_fit() : " << std::endl;
    std::cout << "str1 : " << str1 << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;

    std::cout << std::endl;
    std::cout << "shrinking_to_fit..." << std::endl;

    str1.shrink_to_fit();

    std::cout << std::endl;
    std::cout << "str1 : " << str1 << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;

    //Rserve : Update the capacity
    std::cout << std::endl;
    std::string str20 {"Hello World"};
    std::cout << "str20 capacity : " << str20.capacity() << std::endl;
    std::cout << "str20 size : " << str20.size() << std::endl;
    
    str20.reserve(100);

    std::cout << "str20 after reserve : " << str20 << std::endl;
    std::cout << "str20 capacity : " << str20.capacity() << std::endl;
    std::cout << "str20 size : " << str20.size() << std::endl;
    return 0;
}