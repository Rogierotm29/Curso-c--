#include <iostream>

class Cylinder{
private:
    double base_radius {1};
    double height {1};
public:
    //constructors
    Cylinder() = default;
    Cylinder(double base_radius_param, double height_param){
        base_radius = base_radius_param;
        height = height_param;
    }

    //Getters
    double get_base_radius(){
        return base_radius;
    }
    double get_height(){
        return height;
    }

    //Setters
    void set_base_radius(double radius_param){
        base_radius = radius_param;
    }
    void set_height(double height_param){
        height = height_param;
    }
};

int main(){


    Cylinder cylinder1;
    cylinder1.set_base_radius(10);
    std::cout << "radius : " << cylinder1.get_base_radius() << std::endl;
    return 0;
}