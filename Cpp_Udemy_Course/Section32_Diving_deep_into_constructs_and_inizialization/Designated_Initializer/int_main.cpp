#include <iostream>



struct Component{
    double x;
    double y;
    double z;
};

void print_component(const Component& c){
    std::cout << "Component [ x : " << c.x << ", y : " << c.y << ", z : " << c.z << "]" << std::endl;
}


int main(){
    Component c1{.x=10, .y=20, .z=30};
    Component c2 {.x = 2.4, .z = 5.8};
    Component c3{.y = 5.9, .z = 6.1};
    //Component c4{.x = 4.3, .z = 5.3, .y = 9.4}; //Compile error
    print_component(c1);
    print_component(c2);
    print_component(c3);




}