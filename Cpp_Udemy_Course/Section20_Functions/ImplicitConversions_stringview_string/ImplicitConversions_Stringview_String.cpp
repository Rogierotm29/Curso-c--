#include <iostream>

void say_my_name(const std::string& name){
    std::cout << "You're name is " << name << std::endl;
};

void process_name(std::string_view name_sv){
    say_my_name(std::string(name_sv));
}
int main(){

    std::string name {"Rogiero"};

    //say_my_name(std::string_view("Rogiero"));
    process_name(name);

    return 0;
}


