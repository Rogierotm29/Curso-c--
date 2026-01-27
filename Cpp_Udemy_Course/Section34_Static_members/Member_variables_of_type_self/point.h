#ifndef POINT_H
#define POINT_H

#include <iostream> 

class Point
{
public:
    //Constructors
    Point(double x, double y);
    Point(double xy_coord);   //Point Constructor
    Point();                  //Default constructor
    Point(const Point& point);//Point copy constructor
    ~Point();                 //Point destructor
    double length() const;    // Function to calculate distance

    size_t get_point_count()const{
        return m_point_count;
    }

    void initialize_pointer(double x, double y){
        p_m_point4 = new Point(x,y);
    }

    void print_info() const{
        std::cout << "Point [ m_x : " << m_x << ", m_y : " << m_y << "]" << std::endl;

    }

public:
    Point* p_m_point4; //Works
    static const Point m_point4;
    static Point m_point5;

private:
    double m_x;
    double m_y;
    inline static size_t m_point_count{};

};


#endif //POINT_H