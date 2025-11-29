#include <iostream>

double sum( double scores[5], size_t count);

int main(){
    //double student_scores[] {10.0, 20.0, 30.0}; //Less than 5 parameters
    double student_scores[] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0};
    //More than 5 will only sum up to 5, result : 150

    double sum_result = sum(student_scores,5);
    std::cout << "result is : " << sum_result << std::endl;


    return 0;
}

double sum(double scores[5], size_t count){
    double sum{};

    for(size_t i{}; i < count; ++i){
        sum += scores[i];
    }
    return sum;
}