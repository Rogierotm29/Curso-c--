#include <iostream>


int main(){

    //Type deduction with auto : Just a copy
    double some_var{55.5};

    auto x = some_var;

    std::cout << "sizeof(some_var) : " << sizeof(some_var) << std::endl;
    std::cout << "sizeof(x) : " << sizeof(x) << std::endl;
    std::cout << "&some_var : " << &some_var << std::endl;
    std::cout << "&x : " << &x << std::endl;


    //Type deduction with references : a copy is made with the naked auto
    std::cout << std::endl;
    std::cout << "type deduction with references - case1 : " << std::endl;
    some_var = 55.5;

    double& some_var_ref {some_var};

    auto y = some_var_ref; //y is not deduced as a reference to double
                            //it's just a double that contains the value 
                            // in some_var_ref
    ++y;

    std::cout << "sizeof(some_var) : " << sizeof(some_var) << std::endl;
    std::cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref) << std::endl;
    std::cout << "sizeof(y) : " << sizeof(y) << std::endl;
    std::cout << "&some_var : " << &some_var << std::endl;
    std::cout << "&some_var_ref : " << &some_var_ref << std::endl;
    std::cout << "&y : " << &y << std::endl;
    std::cout << "some_var : " << some_var << std::endl;
    std::cout << "some_var_ref : " << some_var_ref << std::endl;
    std::cout << "y : " << y << std::endl;


    return 0;
}