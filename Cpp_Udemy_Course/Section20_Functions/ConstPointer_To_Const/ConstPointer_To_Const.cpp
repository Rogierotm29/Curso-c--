#include <iostream>


int dog_count{2}; //global variable
void say_age(const int* const p_age); // You can't go through p_age to change value at contained address

int main(){
    int age {23};

    std::cout << "age - before : " << age << std::endl;
    std::cout << "&age - out : " << &age << std::endl;
    say_age(&age);
    std::cout << "age - after : " << age << std::endl;

    return 0;
 
}

void say_age(const int* const p_age){
    //++(p_age); //Changing value address in p_age. Error
    std::cout << "p_age - in : " << p_age << std::endl;
    std::cout << "Hello you're " << *p_age << " years old " << std::endl;

    ///p_age = &dog_count;
}