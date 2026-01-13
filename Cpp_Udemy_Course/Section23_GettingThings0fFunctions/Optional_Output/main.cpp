#include <iostream>
#include <optional>


std::optional<int> find_character_v2(const std::string & str, char c){
    //If found set the return index, else return an empty std::optional
    for(size_t i{}; i < str.size(); ++i){
        if(str.c_str()[i] == c){
            return i;
        }
    }
    return {}; //Or std::nullopt
}

int main(){

    std::string str1 {"Hello World in C++20!"};
    char c{'C'};

    std::cout <<std::endl;
    std::cout << "Handling optional output with std::optional" << std::endl;
    //auto result = find_character_v2(str1,c);
    std::optional<int> result = find_character_v2(str1,c);

    if(result.has_value()){
        std::cout << "Found " << c << " at index " << result.value() << std::endl;
    }else{
        std::cout << "Could not find " << c << " in the string : " << str1 << std::endl;
    }


    return 0;
}