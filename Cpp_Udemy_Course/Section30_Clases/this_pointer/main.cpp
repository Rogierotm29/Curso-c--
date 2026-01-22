#include <iostream>
#include <string>
#include <string_view>

class Dog{
private :
    std::string name;
    std::string breed;
    int * p_age{nullptr};

public:
    //Constructors
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);

    //Destructor
    ~Dog();

    //Print info
    void print_info();

    //Setters
    /*
    //chained calls using pointers
    Dog* Dog::set_dog_name(std::string_view name){
        this->name = name;
        return this;
    }

    Dog* Dog::set_dog_breed(std::string_view breed){
        this -> breed = breed;
        return this;
    }

    Dog* Dog::set_dog_age(int age){
        *(this ->p_age) = age;
        return this;
    }
    */
   //chained calls using reference
    Dog& set_dog_name(std::string_view name){
        this->name = name;
        return *this;
    }

    Dog& set_dog_breed(std::string_view breed){
        this -> breed = breed;
        return *this;
    }

    Dog& set_dog_age(int age){
        *(this ->p_age) = age;
        return *this;
    }


};


Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name <<  " at " << this << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << " at " << this <<  std::endl;
}


void Dog::print_info(){
    std::cout << "Dog (" << this << ") : [ name : " << name 
        << " breed : " << breed << " age : " << *p_age << "]" << std::endl;
}

int main(){

    Dog dog1("Fluffy","Shepherd",2); //Constructor
    dog1.print_info();

    /*
    dog1.set_dog_name("Pumba");
    dog1.set_dog_breed("Wire Fox terrier");
    dog1.set_dog_age(4);
    dog1.print_info();
    */
    //Using pointer setters
   //dog1.set_dog_name("Pumba")->set_dog_breed("Wire Fox Terrier")->set_dog_age(4);

   //Using reference setters
   dog1.set_dog_name("Pumba").set_dog_breed("Wire Fox Terrier").set_dog_age(4);
   dog1.print_info();

   std::cout << "sizeof(dog1) : " << sizeof(dog1) << std::endl;
 
   std::cout << "Done!" << std::endl;




    //Destructor

    return 0;
}