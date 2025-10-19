#include <iostream>
using namespace std;

int main(){
    size_t size {10};

    //Different ways you can declare an array
    //dynamically and how they are initialized

    double* p_salaries {new double[size]}; //Salaries array will contain garbage values

    int* p_students { new(std::nothrow) int[size]{}}; //All values initialized to 0

    double* p_scores {new(std::nothrow) double[size]{1,2,3,4,5}}; //Allocating memory space for an array of size double vars.
                                                                  // First 5 will be initialized with 1,2,3,4,5, and the rest wil be 0's.


    //nullptr check and use the allocated array
    if(p_scores){
        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for( size_t i{}; i < size; ++i){
            cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << endl;
        }
    }

    return 0;
}