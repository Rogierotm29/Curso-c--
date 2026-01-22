#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"
class Cylinder{
private:
    double base_radius {1};
    double height {1};
public:
    //constructors
    Cylinder() = default;
    Cylinder(double base_radius_param, double height_param);

    //Getters
    double get_base_radius();

    double get_height();

    //Setters
    void set_base_radius(double radius_param);
    void set_height(double height_param);

    double volume();
};

#endif