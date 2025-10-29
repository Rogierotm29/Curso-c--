#include <iostream>
#include <string>

int main(){
    //Clear : Removes all characters from the string
    std::cout << std::endl;
    std::cout << "std::string::clear() : " << std::endl;

    std::string str1 {"The Lion Dad"};

    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;

    std::cout << "Clearing..." << std::endl;
    str1.clear();

    std::cout << "str1 is : " << str1 << std::endl;
    std::cout << "str1 size : " << str1.size() << std::endl;
    std::cout << "str1 capacity : " << str1.capacity() << std::endl;

    //Insert(1)
    //(1)basic_string& insert( size_type index, size_type count, charT ch);

    //Inserts count characters in the string starting at index index

    std::cout << std::endl;
    std::cout << "std::string::insert()-1 : " << std::endl;
    std::string str2 {"122"};

    std::cout << "str2 : " << str2 << std::endl;

    std::cout << "Inserting..." << std::endl;
    str2.insert(1,4,'3'); //Count can be 1,2,5, ..

    std::cout << "str2 : " << str2 << std::endl;

    //Insert (2)
    //(2)basic_string& insert (size_type index, const charT* s);

    //Inserts null-terminated character string pointed to by s
    //at the position index. The length of the string is determined
    //by the first null character
    std::cout << ::std::endl;
    std::cout << "std::string::insert()-2 : " << std::endl;
    std::string str3 {"Hello!"};
    const char* txt3 {" World"};
    
    std::cout << "str3 : " << str3 << std::endl; //Hello

    std::cout << "Inserting..." << std::endl;
    str3.insert(5,txt3);

    std::cout << "str3 : " << str3 << std::endl; //HelloWorld!


    //Insert (3)
    //(3)basic_string& insert (size_type index, const charT* s, size_type count);

    //Inserts characters in the range [s, s + count) at the position index.
    //The range can contain null characters


    std::cout << ::std::endl;
    std::cout << "std::string::insert()-3 : " << std::endl;
    std::string str4 {"Hello!"};
    const char* txt5 {" World Health Organization"};
    
    std::cout << "str4 : " << str4 << std::endl; //Hello

    std::cout << "Inserting..." << std::endl;
    str4.insert(5,txt5,6);

    std::cout << "str4 : " << str4 << std::endl; 

    //Erase 
    //basic_string& erase (size_type index = 0, size_type count = npos);

    //Starting at index index, erase count characters from the string

    //Notice that this function returns a reference
    std::cout << std::endl;
    std::cout << "std::string::erase() : " << std::endl;

    std::string str9 {"Hello World is a message used to start off things when learning programming!"};

    str9.erase(11,str9.size() - 12);
    std::cout << "str9 : " << str9 << std::endl;
    
    //Reset str9
    str9 = "Hello World is a message used to start off things when learning programming!";

    //Direct print out. Because this method returns a reference to the modified string
    std::cout << "str9 : " << str9.erase(11,str9.size() - 12) << std::endl;

    //push_back
    //void push_back (charT ch);
    //Appends the given character ch to the end of the string
    std::cout << std::endl;
    std::cout << "std::push_back() : " << std::endl;
    std::string str10 {"Hello World"};
    str10.push_back('!');
    std::cout << "str10 : " << str10 << std::endl;

    //pop_back
    //void pop_back();
    //removes the last character from the string
    std::cout << std::endl;
    std::cout << "std::pop_back() : " << std::endl;
    std::string str11 {"Hello World!!"};
    str11.pop_back();
    std::cout << "str11 : " << str11 << std::endl;
    return 0;
}