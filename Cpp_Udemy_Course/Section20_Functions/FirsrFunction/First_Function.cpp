#include <iostream>

void enter_bar(int age){
    if(age >= 18){
        std::cout << "You can enter the bar" << std::endl;
    }
    else{
        std::cout << "You aren't old enough to enter to the bar" << std::endl;
    }
}

int lucky_number(){
    return 100;
}

int suma (int a, int b){
    return a + b;
}

int main(int argc, char **argv){


    int age = 18;
    enter_bar(age);

    int first_number = 10;
    int second_number = 20;

    int c = suma(first_number, second_number);
    std::cout << c;

    std::cout << std::endl;
    std::cout << "You're lucky number is " << lucky_number();




    return 0;
}