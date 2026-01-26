#include <iostream>
#include <string>


class Person 
{
private:
    std::string last_name{};
    std::string first_name{};
    int* age{};

public:
    //Constructors
    Person() = default;
    Person(std::string last_name_param, std::string first_name_param, int age_param);
    Person(std::string last_name_param, std::string first_name_param);
    Person(std::string last_name);
    
    //Copy Constructor
    Person(const Person& source);

    //Destructor
    ~Person();
    //Utilities 
    void print_info(){
        std::cout << "Person object at : " << this
            << "[ Last name : " << last_name
            << ", First name : " << first_name
            << ", age : " << *age
            <<", age adddress : " << age
            << " ]" << std::endl;
    }

};

Person::Person(std::string last_name_param) : Person(last_name_param, "Doe", 30)
{
}

Person::Person(std::string last_name_param, std::string first_name_param) : Person(last_name_param, first_name_param, 30)
{
}
Person::Person(std::string last_name_param, std::string first_name_param, int age_param) : last_name(last_name_param), first_name(first_name_param)
{
    age = new int;
    *age = age_param;
}

Person::Person(const Person& source) : last_name(source.last_name), first_name(source.first_name)
{
    age = new int;
    *age = *source.age;
}

Person::~Person(){
    delete age;
}


int main(){
    Person p1("De La Torre", "Rogiero",20);
    p1.print_info();

    //Creating copies
    Person p2(p1);
    p2.print_info();

    p1.~Person();
    p1.print_info();
    
    p2.print_info();

    return 0;
}