#include <iostream>


int main(){

    //Capture lists
    /*
    double a{10};
    double b{20};

    auto func = [a,b](){
        std::cout << "a + b : " << a + b << std::endl;
    };
    func();
    */

    //Capturing by value : what we have in the lambda function is a copy
    int c{42};

    //para que si cambie el valor que se modifica en el for que se vea reflejado en la funcion lambda tienes
    //que hacer una referencia en el capture list [&c]
    auto func = [c](){
        std::cout << "Inner value : " << c << std::endl;
    };

    for(size_t i{}; i < 5; ++i){
        std::cout << "Outer value : " << c << std::endl;
        func();
        ++c;
    }


    
    return 0;
}