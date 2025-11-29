#include <iostream>

double sum(const double (&scores)[10]);

int main(){
    //double student_scores[] {10.0, 20.0, 30.0}; //Less than 5 parameters
    double student_scores[] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    //More than 5 will only sum up to 5, result : 150

    double sum_result = sum(student_scores);
    std::cout << "result is : " << sum_result << std::endl;


    return 0;
}


double sum(const double (&scores)[10]){
    double sum{};

    for(size_t i{}; i < std::size(scores); ++i){
        sum += scores[i];
    }

    /*for (auto score : scores){
        sum += score;
    }*/

    return sum;
}