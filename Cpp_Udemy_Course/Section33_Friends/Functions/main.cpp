#include <iostream>
#include <string>

class Dog{
private :
    std::string dog_name;
    int dog_age;
public :
    Dog(std::string dog_name, int dog_age){
        this->dog_age = dog_age;
        this->dog_name = dog_name;
    }
    friend void debug_dog_info(const Dog& dog);
    friend void debug_dog_info();
};


void debug_dog_info(const Dog & dog)
{
    std::cout << "Dog name : " << dog.dog_name << ", dog age : "
    << dog.dog_age << std::endl;
}

void debug_dog_info(){
    Dog internal_dog("Pinch",4);
    std::cout << "Dog name : " << internal_dog.dog_name
    << ", dog age : " << internal_dog.dog_age << std::endl;
}