#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Cylinder {
public :
    double base_radius {1.0};
    double height {1.0};

public :
    double volume(){
        return M_PI * base_radius * base_radius * height;
    }
};

int main(){


    Cylinder cylinder1;
    std::cout << "volume c1 : " << cylinder1.volume() << std::endl;

    cylinder1.base_radius = 3.0;
    cylinder1.height = 2;
    std::cout << "volume c1 : " << cylinder1.volume() << std::endl;

    Cylinder cylinder2;
    std::cout << "volume c2 : " << cylinder2.volume() << std::endl;
    return 0;
}