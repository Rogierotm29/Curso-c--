#include <iostream>

int max(int a, int b){
    return(a>b)? a : b;
}

double max(double a, double b){
    return(a>b)? a : b;
}


int main(){

    double a {10.10};
    double b{10.39};

    int x {1};
    int y {2};

    
    std::cout << max(x,y) << std::endl;

    return 0;
}