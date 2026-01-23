#include <iostream>
#include <string>


class Dog{
private:
    std::string dog_name;
    std::string dog_breed;
    int dog_age;

public:
    Dog();
    Dog(const std::string& name_param, const std::string& breed_param, int age_param);
    std::string& get_name(){
        return dog_name;
    }
    std::string& get_breed(){
        return dog_breed;
    }
    int& get_age(){
        return dog_age;
    }
    void print_info();
};

Dog::Dog(){
    dog_name = "Patolquio";
    dog_breed = "Golden Retriever";
    dog_age = 4;
}

Dog::Dog(const std::string& name_param, const std::string& breed_param, int age_param){
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = age_param;
}

void Dog::print_info(){
    std::cout << "Dogs name : " << dog_name << std::endl;
    std::cout << "Dogs breed : " << dog_breed << std::endl;
    std::cout << "Dogs age : " << dog_age << std::endl;
}


int main(){

    Dog dog1("Fluffy","Sheperd",3);

    dog1.print_info();
    std::cout << std::endl;

    std::cout << "dog name : " << dog1.get_name() << std::endl;

    std::cout << "changing the name of the dog" << std::endl;
    dog1.get_name() = "Dandino";
    dog1.print_info();
    std::cout << std::endl;


    dog1.get_age() = 5;
    dog1.print_info();
    std::cout << std::endl;


    
    

    return 0;
}




