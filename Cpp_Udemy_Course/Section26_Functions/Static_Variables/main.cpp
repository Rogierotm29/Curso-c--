#include <iostream>

int student_count_global{0};

int add_student(){
    static int student_count{0}; //The scope of this var is in add_student,
                                //but it's life goes beyond the function execution
    student_count++;
    return student_count;
}

int add_student_using_global_var(){
    student_count_global++;
    //Student_count++; //Compiler error, this student_count can only
    //be used in the add_student function.
    //It has function local block scope
    return student_count_global;
}

void some_other_function(){
    student_count_global--;
}
int main(int argc, char ** argv){


    return 0;
}