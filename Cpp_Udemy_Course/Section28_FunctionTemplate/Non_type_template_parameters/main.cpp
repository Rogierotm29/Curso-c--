#include <iostream>


//int threshold sirve para hacer un hold a un valor no a un typo
template <int threshold, typename T>
bool is_valid(T collection[], size_t size){
    T sum{};
    for(size_t i{ 0 }; i < size; ++i){
        sum += collection[i];
    }
    return (sum > threshold) ? true : false;
}


int main(int argc, char ** argv){

    double temperatures[] {10.0, 20.0, 30.0, 40.0, 50.0};
    bool valid = is_valid<200, double>(temperatures, std::size(temperatures));
    std::cout << std::boolalpha << "valid : " << valid << std::endl;

    return 0;
}