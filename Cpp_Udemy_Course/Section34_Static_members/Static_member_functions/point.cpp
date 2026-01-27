#include "point.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y) : m_x(x), m_y(y)
{
    std::cout << "Constructing Point [m_x : " << m_x << ", m_y : " << m_y << "]" << std::endl;
    ++m_point_count;
}

Point::Point(double xy_coord) : Point(xy_coord, xy_coord)
{
    std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const Point& point) : Point(point.m_x,point.m_y)
{
    //Copy constrctor
    std::cout << "Copy constructor called" << std::endl;
    ++m_point_count; //Creating a copy object. so we increment
}