#include <iostream>



int* max_return_pointer(int* a, int* b){
    if(*a > *b){
        return a;
    }else{
        return b;
    }
}


int main(int argc, char* argv[]){

    int a {25};
    int b {13};

    std::cout << "before function call : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    int* p_max = max_return_pointer(&a, &b);

    std::cout << "max : " << *p_max << std::endl;

    ++(*p_max);

    std::cout << std::endl;
    std::cout << "After function call  : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

}