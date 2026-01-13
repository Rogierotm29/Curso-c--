#include <iostream>
#include <optional>


int main(){

    //Declare and initialize
    std::optional<int> items{3};
    std::optional<std::string> name{"Rogiero De La Torre"};
    std::optional<double> weight {77.2};
    std::optional<char> character{'s'};

    //Declare and empty initialize
    std::optional<std::string> dog_name {}; //Initializes to std::nullopt
    std::optional<int> age {std::nullopt}; //std::nullopt is the null or zero equivalent
                                            // for std::optional
    std::optional<char> letter = std::nullopt; //Triggers unused warning
    std::optional<double> height = {};          //Initializes to std::nullopt
                                                //Triggers unused warning


    //Reading values : can use the value method, or the deference operator

    std::cout << "items : " << items.value() << std::endl;
    std::cout << "items : " << *items << std::endl; //Personaly find this confusing as
                                                    //it's not a pointer, so this the
                                                    //first and last time I use it in the course
    
    std::cout << "name : " << name.value() << std::endl;
    std::cout << "weight : " << weight.value() << std::endl;
    std::cout << "character : " << character.value() << std::endl;

    //Conditional reading
    std::cout << std::endl;
    std::cout << "Conditional reading" << std::endl;

    if(letter.has_value()){
        std::cout << "letter contains a useful value" << std::endl;
    }else{
        std::cout << "letter contains std::nullopt" << std::endl;
    }
    
                                                   
    return 0;
}