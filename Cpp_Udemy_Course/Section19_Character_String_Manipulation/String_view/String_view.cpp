#include <iostream>
#include <string>

int main(){
    std::string string {"Hello"};
    std::string string1 {string};
    std::string string2 {string};

    std::cout <<  "address of string : " << &string1 << std::endl;
    std::cout << "address of string1 : " << &string1 << std::endl;
    std::cout << "adddress of string2 : " << &string2 << std::endl;

    std::string_view sv {"Hello"};
    std::string_view sv1 {sv}; //view viwing hello literal
    std::string_view sv2 {sv1}; //Another view viewing hello

    std::cout << "Size of string_view : " << sizeof(std::string_view) << std::endl;

    std::cout << "sv : " << sv << std::endl;
    std::cout << "sv1 : " << sv1 << std::endl;
    std::cout << "sv2  : " << sv2 << std::endl;

    std::string string3 {"Regular std::string"};
    const char* c_string {"Regular C-String"};
    const char char_array[]{"Char array"}; //Null terminated
    char char_array2[]{'H','u','g','e'}; // Non null terminated array

    std::string_view sv3{"String literal"};
    std::string_view sv4{string3};
    std::string_view sv5{c_string};
    std::string_view sv6{char_array};
    std::string_view sv7{sv3};
    std::string_view sv8{char_array2,std::size(char_array2)}; //Non null terminated char array
                                                              //Need to pass in size

    std::cout << "sv3 : " << sv3 << std::endl;
    std::cout << "sv4 : " << sv4 << std::endl;
    std::cout << "sv5  : " << sv5 << std::endl;
    std::cout << "sv6  : " << sv6 << std::endl;
    std::cout << "sv7 (constructed from other string_view)  : " << sv7 << std::endl;
    std::cout << "Non null terminated string with std::string_view : " << sv8 << std::endl;

    //Changing the original viewed string
    //Any change to the original string, s reflected in
    //the views observing that string
    std::cout << std::endl;
    std::cout << "Changing the original string : " << std::endl;

    char word [] {"Dog"};
    std::string_view sv9{word};

    std::cout << "word : " << sv9 << std::endl;

    std::cout << "Changing data... " << std::endl;
    //Change the data
    word[2] = 't';

    std::cout << "word : " << sv9 << std::endl;


    const char* c_string1 {"The animals have left the region"};
    std::string_view sv10 {c_string};

    std::cout << "sv10 : " << sv10 << std::endl;

    sv10.remove_prefix(4); //Removes "The"

    //Prints : animals have left the region
    std::cout << "View with removed prefix(4) : " << sv10 << std::endl;

    sv10.remove_suffix(10); //Removes "the region"

    //Prints : animals have left
    std::cout << "View with removed suffix(10) : " << sv10 << std::endl;

    //The actual data hasn't changed

    //Changing the view doesn't change the viewed string :
    std::cout << "Original sv10 viewed string : " << c_string1 << std::endl; 

    //string_view can't outline the viewed string 



    return 0;

}