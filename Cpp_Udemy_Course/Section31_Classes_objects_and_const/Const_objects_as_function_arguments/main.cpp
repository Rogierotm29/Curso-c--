#include <iostream>
#include <string>


class Dog{
private:
    std::string dog_name;
    std::string dog_breed;
    int* dog_age;

public:
    Dog();
    Dog(const std::string& name_param, const std::string& breed_param, int age_param);
    ~Dog();
    void set_name(const std::string& dog_name);
    void set_dog_breed(const std::string& breed);
    void set_dog_age(int age);
    std::string get_name();
    std::string get_breed();
    int get_age();
    void print_info();
};

Dog::Dog(){
    dog_name = "Patolquio";
    dog_breed = "Golden Retriever";
    dog_age = new int;
    *dog_age = 4;
}

Dog::Dog(const std::string& name_param, const std::string& breed_param, int age_param){
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int;
    *dog_age = age_param;
}

Dog::~Dog(){
    delete dog_age;
}
void Dog::set_name(const std::string& dog_name){
    this -> dog_name = dog_name;
}

void Dog::set_dog_breed(const std::string& dog_breed){
    this -> dog_breed = dog_breed;
}

void Dog::set_dog_age(int age){
    *(dog_age) = age;
}

std::string Dog::get_breed(){
    return dog_breed;
}

std::string Dog::get_name(){
    return dog_name;
}

int Dog::get_age(){
    return *dog_age;
}

void Dog::print_info(){
    std::cout << "Dogs name : " << dog_name << std::endl;
    std::cout << "Dogs breed : " << dog_breed << std::endl;
    std::cout << "Dogs age : " << *dog_age << std::endl;
}


void function_taking_dog(Dog dog){
    dog.set_name("Internal dog");
    dog.print_info();
}

int main(){

    const Dog dog1("Flatcher", "Shepherd", 3);
    //Dog by value
    function_taking_dog(dog1);

    return 0;
}
