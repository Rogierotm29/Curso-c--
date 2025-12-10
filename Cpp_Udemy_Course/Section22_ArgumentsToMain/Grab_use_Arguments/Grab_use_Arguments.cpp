#include <iostream>



int main(int argc, char *argv[])
{
    std::cout << "We have " << argc << " arguments passed to the program" << std::endl;

    for (int i {0}; i < argc; ++i){
        std::cout << "Argument [" << i << "] : " << argv[i] << std::endl;
    }

    return 0;
}