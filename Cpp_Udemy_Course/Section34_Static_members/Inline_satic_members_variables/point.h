#ifndef POINT_H
#define POINT_H

#include <iostream> 
class Point
{
public:
    //Constructors
    Point(double x, double y);
    Point(double xy_coord);    //Point onstructor
    Point();                   //Default constructor
    Point(const Point& point); //Point copy constructor
    ~Point();                  //Point destructor
    double length() const;     //Function to calculate distance from the point(0,0)


    size_t get_point_count() const{
        return m_point_count;
    }

    void print_info()const{
        std::cout << "Point [ &m_x] : " << &m_x << ", &m_y : " << &m_y << "]" << std::endl;  
    }

private:
    double m_x;
    double m_y;
public:
    inline static size_t m_point_count{};
};


#endif  //POINT_H