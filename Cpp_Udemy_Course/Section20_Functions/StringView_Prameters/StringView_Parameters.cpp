#include <iostream>

void say_my_name(std::string_view sv);

int main(){

    std::string name {"Rogiero"};

    say_my_name(std::string_view("Rogiero"));
    say_my_name(name);

    return 0;
}


void say_my_name(std::string_view name){
    std::cout << "You're name is " << name << std::endl;
}