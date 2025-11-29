#include <iostream>

void say_age(const int* p_age);

int main(){

    int age{23};

    std::cout << "age - before : " << age << std::endl;
    std::cout << "&age - out : " << &age << std::endl;
    say_age(&age);
    std::cout << "age - after : " << age << std::endl;

    return 0;
}


void say_age(const int* p_age){
    //++(*p_age);
    std::cout << "p_age - in : " << p_age << std::endl;
    std::cout << "Hello! You are " << *p_age << " years old " << std::endl;

}