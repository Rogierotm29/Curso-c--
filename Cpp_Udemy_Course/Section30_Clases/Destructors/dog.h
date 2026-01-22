#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>
#include <string_view>
class Dog{
private:
    std::string dog_name;
    std::string dog_breed;
    int * dog_age{nullptr};

public:
    Dog();
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

};



#endif DOG_H