#include <iostream>
#include <string>

int find_character_v0(const std::string & str, char c){
    //IF found, return the index, else return -1
    int not_found {-1};
    for(size_t i{}; i < str.size() ; ++i){
        if(str.c_str()[i] == c){
            return i;
        }
    }
    return not_found;
}
int main(){

    std::string str1 {"Hello World in C++20!"};
    char c{'C'};

    std::cout << std::endl;
    std::cout << "Judging by return value (-1) : " << std::endl;

    //std::cout << "index : " << find_character_v0(str1, c) << std::endl;

    if(find_character_v0(str1,c) != -1){
        std::cout << "found the character" << std::endl;
    }else{
        std::cout << "coudn't find the character" << std::endl;
    }


    return 0;
}