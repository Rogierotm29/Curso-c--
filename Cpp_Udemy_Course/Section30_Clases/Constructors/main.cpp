#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


class Cylinder{
//Properties
private:
    double base_radius;
    double height;

//Behaviours
public:
    //Constructor
    Cylinder(){
        base_radius = 2.0;
        height = 2.0;
    };

    Cylinder(double radius_param, double height_param){
        base_radius = radius_param;
        height = height_param;
    }
    //No es constructor
    double volume(){
        return M_PI * (base_radius * base_radius) * height;
    }
};



int main(){

    Cylinder cylinder1(12,12);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    Cylinder cylinder2;
    std::cout << "volume : " << cylinder2.volume() << std::endl;



    return 0;
}