#include <iostream>



struct Point{
private:
    double x;
    double y;

public:
    Point(std::initializer_list<double> list){
        std::cout << "Initializer list constructor called" << std::endl;
        x = *(list.begin());
        y = *(list.begin()+1);
    }

    void print_point() const{
    std::cout << "Point [ x : " << x << ", y : " << y << "]" << std::endl;
    }
};


int main(){

    Point p1{12.5,45.3};
    p1.print_point();


    return 0;
}