#include <iostream>

//function declaration
int max( int a, int b);
int min(int a, int b);
int incr_mult(int a, int b);

int main(){


    int a{3};
    int b{4};

    std::cout << "max(" << a << "," << b << ") : " << max(a,b) << std::endl;
    std::cout << "min(" << a << "," << b << ") : " << min(a,b) << std::endl;
    std::cout << "incr_mult(" << a << "," << b << ") : " << incr_mult(a,b) << std::endl;

    return 0;
}

//Function definition or implementation
int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int incr_mult(int a, int b){
    a++;
    b++;
    return a * b;
}