#include <iostream>
 
void say_my_age(int age);
 
int main(){
 
    say_my_age(20);
    return 0;
}
 
void say_my_age(const int age){
    std::cout << "You are " << age << " years old!" << std::endl;
}