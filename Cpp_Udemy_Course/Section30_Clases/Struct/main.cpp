#include <iostream>
#include <string>

//Members private by default
class Dog{
public:
    std::string name{"None"};
};

//Members public by default
struct Cat{
private:
    std::string name;

};

int main(){


    return 0;
}