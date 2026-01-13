#include <iostream>

void say_my_name(const std::string& name){
    std::cout << "Your name is (ref) : " << name << std::endl;
}


void say_my_name(std::string name){
    std::cout << "Your name is (non ref) : " << name << std::endl;
}

int main(){

    std::string name{"Rogiero"};

    //say_my_name(name);

    return 0;
}