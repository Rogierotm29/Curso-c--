#include <iostream>

auto& max(int& a, int& b){
    if(a > b){
        return a;
    }else{
        return b; //will return a copy
    }
}
int main(){

    int x{4};
    int y{5};

    //Naked auto reference return type deduction : A copy is returned
    std::cout << std::endl;
    std::cout << "Naked auto reference return type deduction : " << std::endl;

    //int& result = max(x,y); Error

    int& result = max(x,y); //A copy of the max is returned

    ++ result;

    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
    std::cout << "result : " << result << std::endl;


    return 0;
}