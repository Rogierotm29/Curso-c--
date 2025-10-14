#include <iostream>
using namespace std;

int main(){
    int scores[10] {11,12,13,14,15,16,17,18,19,20};

    //Array index notation
    // int* pointer1 {&scores[0]};
    // int* pointer2 {&scores[8]};

    //Pointer arithemtic location
    int* pointer1 {scores + 0};
    int* pointer2 {scores + 8};

    std::cout << "pointer2 - pointer1 : " << pointer2 - pointer1 << std::endl; //8
    std::cout << "pointer1 - pointer2 : " << pointer1 - pointer2 << std::endl; //-8

    //You can usa the positive or negative result
    //depending on what you are after in your application.

    //std::ptrdiff 
    std::ptrdiff_t pos_diff = pointer2 - pointer1;
    std::ptrdiff_t neg_diff = pointer1 - pointer2;

    std::cout << "pos_diff : " << pos_diff << std::endl;
    std::cout << "neg_diff : " << neg_diff << std::endl;
    std::cout << "Size of std::ptrdiff_t : " << sizeof(std::ptrdiff_t) << std::endl;


    return 0;
}