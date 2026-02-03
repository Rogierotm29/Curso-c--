#include <iostream>

inline int age{12};

inline void some_function(){
    std::cout << "age : " << age << std::endl;
    std::cout << "&age : " << &age << std::endl;
}