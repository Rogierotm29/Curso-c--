#include "dog.h"

Dog::Dog(){
    dog_name =  {"Jorge"};
    dog_breed = {"gato"};
    dog_age = new int;
    *dog_age = 30;

    std::cout << "Dog : " << dog_name << " constructed at " << this << std::endl;

}
Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int; // memory allocated on the heap
    *dog_age  = age_param;
    
    std::cout << "Dog : " << dog_name << " constructed at " << this << std::endl;
}
Dog::~Dog(){
    delete dog_age;
    std::cout << "Dog destructor called for " << dog_name << std::endl; 
}
