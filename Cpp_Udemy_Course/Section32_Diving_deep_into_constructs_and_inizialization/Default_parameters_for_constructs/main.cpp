#include <iostream>

double PI = 3.1416;

class Cylinder
{
private :
    double base_radius{1};
    double height{2};
public:
    Cylinder() = default;
    Cylinder(double radius_param, double height_param);

    //Getters
    double get_base_radius() const;
    double get_height() const;

    //Setters
    void set_base_radius(double radius_param);
    void set_height(double height_param);

    double volume();
};

Cylinder::Cylinder(){
    base_radius = 1;
    height = 1;
}

Cylinder::Cylinder(double radius_param, double height_param){
    base_radius = radius_param;
    height = height_param;
}

double Cylinder::get_base_radius() const{
    return base_radius;
}

double Cylinder::get_height() const {
    return height;
}

void Cylinder::set_base_radius(double radius_param){
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param){
    height = height_param;
}

double Cylinder::volume(){
    return PI *(base_radius * base_radius) * height;
}


int main(){


    return 0;
}