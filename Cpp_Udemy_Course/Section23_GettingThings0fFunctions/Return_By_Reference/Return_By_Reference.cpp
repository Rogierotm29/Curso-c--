#include <iostream>

int& max_return_reference(int& a, int& b){
    if(a > b) {
        return a;
    }else{
        return b;
    }
}


int main(int argc, char* argv[]){

    int a {10};
    int b {20};

    std::cout << "Before function call : " << std::endl;
    std::cout << "a: " << std::endl;
    std::cout << "b: " << std::endl;

    int& ref_max = max_return_reference(a,b);
    int val = max_return_reference(a, b); //Value in returned reference is stored
                                          // in val. val is not a reference. Just a regular variable
    
    std::cout << "max : " << ref_max << std::endl;
    std::cout << "val ; " << val << std::endl;

    ++ref_max;

    std::cout << std::endl;
    std::cout << "After function call : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl; 


    return 0;
}