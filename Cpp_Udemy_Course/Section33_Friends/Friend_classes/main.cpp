#include <iostream>
#include <string>


class Dog{
public :
    Dog(std::string dog_name, int dog_age);
    friend class Cat;
private:
    std::string dog_name;
    int dog_age;
};



class Cat{
public :
    Cat(std::string cat_name);

    void show_info_about_dog(const Dog& dog) const{
        std::cout << "dog name : " << dog.dog_name << std::endl;
    }
private:
    std::string cat_name;
};