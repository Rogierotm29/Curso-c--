#include <iostream>
#include <string>


int main(){

    //Find(1)
    //std::string::find()
    //size_type find( const basic_string& str, size_type pos = 0) const
    //Find ths starting where we call the method
    //the string where we call the method.
    std::cout << std::endl;
    std::cout << "std::string::find - (1) : " << std::endl;
    std::string string1 {"Water was poured in the heater"};
    std::string search_for{"ter"};

    size_t found_pos = string1.find(search_for);
    std:: cout << "find('ter') : index [" << found_pos << "]" << std::endl;

    //find red
    search_for = "red";
    found_pos = string1.find(search_for);
    std::cout << "find('red') : index [" << found_pos << "]" << std::endl;
    
    //Find something that isn't there
    search_for = "chiken";
    found_pos = string1.find(search_for);
    std::cout << "find('chiken') : index [" << found_pos << "]" << std::endl; 



    //Using std::string::npos to check if search was successfull or failed
    search_for = "red";
    found_pos = string1.find(search_for);
    if(found_pos == std::string::npos){
        std::cout << "Could not find the string 'red'. " << std::endl;
    }else{
        std::cout << "'red' found starting at position : " << found_pos << std::endl;

    }

    //Searching for chiken
    //Using std::string::npos to check if search was successfull or failed
    search_for = "chiken";
    found_pos = string1.find(search_for);
    if(found_pos == std::string::npos){
        std::cout << "Could not find the string 'chiken'. " << std::endl;
    }else{
        std::cout << "'chiken' found starting at position : " << found_pos << std::endl;

    }

    //Find(3)
    //size_type find( const CharT* s, size_type pos = 0) const;
    //finds the first substring equal to the character in the std::string

    std::cout << std::endl;
    std::cout << "std::string::find - (3) : " << std::endl;

    std::string string2 = "beer is packaged by her in beer cans around here.";
    const char* c_string2{"her"};

    found_pos = string2.find(c_string2,23);

    if(found_pos != std::string::npos){
        std::cout << c_string2 << " found at position : " << found_pos << std::endl;
    }else{
        std::cout << "Could not find the string : " << (c_string2) << std::endl;
    }

    return 0;
}