#include <iostream>

void compute(int age = 34, double weight = 70.5, double distance = 4){
    std::cout << "doing computations on age : " << age <<  " weight : " << weight << " and distance : " << distance   << std::endl;
}

void greet_teacher(std::string_view name_sv = "teacher", int homeworks = 12,
                    int examns = 4, double pass_rate = 0.5, std::string_view first_dpmt = "Computer Sce");


int main(){

    greet_teacher();
    greet_teacher("Mr bean");
    greet_teacher("Mr  Hamston", 7);
    greet_teacher("Mr walker", 7, 3);
    greet_teacher("Mr paku",7,3,0.7);
    greet_teacher("Mr kojo", 7,3, 0.7, "Applied mathematics");

    compute(10, 80, 4);
    return 0;
}


void greet_teacher(std::string_view name_sv, int homeworks, int examns, double pass_rate, std::string_view first_dpmt){
    std::cout << "Hello " << name_sv << " (Department: " << first_dpmt << ")"
              << " - Homeworks: " << homeworks
              << ", Exams: " << examns
              << ", Pass rate: " << (pass_rate * 100.0) << "%" 
              << std::endl;
}