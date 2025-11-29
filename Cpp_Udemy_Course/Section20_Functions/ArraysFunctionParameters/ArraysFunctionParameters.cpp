#include  <iostream>

double sum ( double array[], size_t count){
    //Double sum( double * array, size_t count)
    double sum{};

    //array = &sum; //This compiles

    array[1] = 70.0; //Can affect the real arg array in the function taking array arg

    std::cout << "size of array : " << sizeof(double*) << std::endl;
    std::cout << "size f int* : " << sizeof(int * ) << std::endl;
    std::cout << "size of lng int* : " << sizeof(long int*) << std::endl;
    
    //size_t size {std::size(array)}; //Compile error

    for(size_t i{}; i < count; ++i){
        //sum += *(array + i);
        //sum += array[i];
        sum += *(array++); //can remove this paranthesis but they make things more readable
    }
    return sum;
}


int main(){

    double arr[] = {10.0, 20.0, 30.0};
    size_t size = 3;

    double result = sum(arr, size);
    std::cout << "Sum: " << result << std::endl;
    
    return 0;
}