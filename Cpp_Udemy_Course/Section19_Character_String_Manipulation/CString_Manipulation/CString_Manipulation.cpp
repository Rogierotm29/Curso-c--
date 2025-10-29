#include <cstring>
#include <iostream>


int main(){
    //std::strlen : Find length of string
    const char message1 [] {"The sky is blue."};

    //Array decays into pointer when we use const char*
    const char* message2 {"The sky is blue."};
    std::cout << "message1 : " << message1 << std::endl;

    //strlen ignores null character
    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;

    //Includes the null character
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    //strlen still works with decayed arrays
    std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;

    //Prints size of pointer
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    //std::strcmp - signature : int strcmp ( const char *lhs, const char *rhs);
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //Zero if lhs and rhs compare equal.
    //and Positive value if lhs appears after rhs in lexicographical order.
    std::cout << std::endl;
    std::cout << "std::strcmp : " << std::endl;
    const char* string_data1 {"Blabama"};
    const char* string_data2 {"Alabama"};

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1,string_data2) << std::endl;
    
    string_data1 = "Alabama";
    string_data2 = "Alabama";

    //Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1,string_data2) << std::endl;

    //std::strncmp : int strncmp( const char *lhs, const char *rhs, std::size_t count);
    //Compares n characters in the strings 
    //Returns : Negative value if lhs appears before rhs in lexicographical order
    //Zero if lhs and rhs compare equal, or if count is zero.
    //Positive value if lhs appears after rhs in lexicographical order.

    //Print out the comparison
    size_t n{3};
    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;


    string_data1 = "aaaia";
    string_data2 = "aaance";

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;

    //Find the first occurrence of a character
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;

    //we use std::strchr to find all the characters one by one.

    const char* str {"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char* result = str;
    int iterations{};

    while((result = std::strchr(result,target)) != nullptr){
        std::cout << "Found " << target << " starting at " << result << "\n";

        //Increment result, otherwise we'll find target at the same location
        ++result;
        ++iterations;
    }

    std::cout << "Iterations : " << iterations << std::endl;

    //Find last occurence

    std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;

    char input[] = "/home/user/hello.cpp";
    char* output = std::strchr(input, '/');
    if(output){
        std::cout << output + 1 << std::endl; //+1 because we want to start printing past
                                              //  the character found by std::strrchr
    }
    return 0;
}