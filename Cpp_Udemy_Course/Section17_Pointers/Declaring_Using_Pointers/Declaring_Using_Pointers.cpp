#include <iostream>

using namespace std;



int main (){

    //Declaring pointers
    int* p_number {}; //Can only store an address of
                       //a variable of type int
    double* p_fractional_number {}; //can only store an address of 
                                     //a variable of type double


    //Explicitely initialize to nullptr
    int* p_number1{nullptr};
    int* p_fractional_number1 {nullptr};

    //Initializing pointers and assigning them data

    //We know that pointers store address of variables
    int int_var {43};
    int* p_int {&int_var}; //The address of operator (&);

    cout << "Int var : " << int_var << endl;
    cout << "p_int (Address in memory) : " << p_int << endl;


    //You can also change the address stored in a pointer any time
    int int_var1 {65};

    int_var =  126;

    p_int = &int_var1; //Assign a different address to the pointer
    cout <<"p_int (with different address : ) " << p_int << endl;

    //Dereferencing a pointer

    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    cout << "value : " << *p_int2 << endl;

    return 0;
}