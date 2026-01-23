#include <iostream>
#include <string>
#include <string_view>


class Dog{
private:
    std::string_view dog_name;
    std::string_view dog_breed;
    int* dog_age;

public:
    Dog();
    Dog(const std::string_view& name_param, const std::string_view& breed_param, int age_param);
    ~Dog();
    void set_name(const std::string_view& dog_name);
    void set_dog_breed(const std::string_view& breed);
    void set_dog_age(int age);
    std::string_view get_name() const;
    std::string_view get_breed() const;
    int get_age() const;
    void print_info();
};

Dog::Dog(){
    dog_name = "Patolquio";
    dog_breed = "Golden Retriever";
    dog_age = new int;
    *dog_age = 4;
}

Dog::Dog(const std::string_view& name_param, const std::string_view& breed_param, int age_param){
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int;
    *dog_age = age_param;
}

Dog::~Dog(){
    delete dog_age;
}
void Dog::set_name(const std::string_view& dog_name){
    this -> dog_name = dog_name;
}

void Dog::set_dog_breed(const std::string_view& dog_breed){
    this -> dog_breed = dog_breed;
}

void Dog::set_dog_age(int age){
    *(dog_age) = age;
}

std::string_view Dog::get_breed() const{
    return dog_breed;
}

std::string_view Dog::get_name() const{
    return dog_name;
}

int Dog::get_age() const{
    return *dog_age;
}

void Dog::print_info(){
    std::cout << "Dogs name : " << dog_name << std::endl;
    std::cout << "Dogs breed : " << dog_breed << std::endl;
    std::cout << "Dogs age : " << *dog_age << std::endl;
}


int main(){

    Dog dog1;
    dog1.print_info();

    dog1.set_name("Rogiero");
    dog1.set_dog_breed("Mexicano");
    dog1.set_dog_age(3);

    dog1.print_info();

    const Dog dog2("Jorge", "Gringo", 3);
    
    

    return 0;
}




