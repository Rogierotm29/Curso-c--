#include <iostream>

double max(double * numbers, size_t count){
    double maximum{0};

    for(size_t i{0}; i < count; ++i){
        if(numbers[i]  > maximum){
            maximum = numbers[i];
        }
        
    }
    return maximum;
}

int max(int* numbers, size_t count){
    int maximum{0};

    for(size_t i{0}; i < count; ++i){
        if(numbers[i] > maximum){
            maximum = numbers[i];
        }
    }
    return maximum;
}

int main(){

    double doubles[] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0};
    int ints[] {1, 2, 3, 4, 5, 6};

    std::cout << max(doubles, std::size(doubles)) << std::endl;
    std::cout << max(ints, std::size(ints)) << std::endl;

    return 0;
}