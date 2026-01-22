#include <iostream>

float PI = 3.14159265358979323846;
class Cylinder{
public:
    double base_radius{1.0};
    double height {1.0};
public:
    //Constructors
    Cylinder() = default;
    Cylinder(double base_radius_param, double height_param){
        base_radius = base_radius_param;
        height = height_param;
    }
    double volume(){
        return PI * (base_radius*base_radius) * height;
    }

};


int main(){



    return 0;
}