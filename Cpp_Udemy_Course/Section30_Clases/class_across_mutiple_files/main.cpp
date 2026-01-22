#include <iostream>
#include "constants.h"
#include "cylinder.h"


int main(){

    //Stack object : . notation
    Cylinder c1(10,2);
    std::cout << "volume c1 : " << c1.volume() << std::endl;

    //Heap object : .deference and . notation
    //              . -> notation
    Cylinder* c2 = new Cylinder(11, 20); //Create object on heap
    std::cout << "volume c2 : " << (*c2).volume() << std::endl;
    std::cout << "volume c2 : " << c2->volume() << std::endl;

    delete c2; //Remember to release memory from heap

    return 0;
}