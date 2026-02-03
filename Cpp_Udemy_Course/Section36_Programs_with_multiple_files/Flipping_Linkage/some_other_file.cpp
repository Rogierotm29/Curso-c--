#include <iostream>
extern const double distance; //Declaration

void print_distance(){
    //++distance; //Can't modify a read only file
    std::cout << "distance(some_other_file) : " << distance << std::endl;
    //std::cout << "&distance(some_other_file) : " &distance << std::endl;
}

//Internal linkage
namespace{
    void some_other_function(){
        std::cout << "Hello there" << std::endl;
    }
}