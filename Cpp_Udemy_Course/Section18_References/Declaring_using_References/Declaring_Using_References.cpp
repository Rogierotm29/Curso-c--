#include <iostream>
using namespace std;

int main(){
    int int_value {45};
    double double_value {33.46};

    int& reference_to_int_value_1 {int_value}; //Assign throught initialization
    int& reference_to_int_value_2 = int_value; //Assign throught assignment
    double& reference_to_double_value_1 {double_value};

    //You hace to declare and initialize in one statement
    //int& some_reference is going to give an error

    cout << "int_value : " << int_value << endl;
    cout << "double_value : " << double_value << endl;
    cout << "reference_to_int_value_1 : " << reference_to_int_value_1 << endl;
    cout << "reference_to_int_value_2 : " << reference_to_int_value_2 << endl;
    cout << "reference_to_double_value_1 : " << reference_to_double_value_1 << endl;
    cout << "&int_value :" << &int_value << endl;
    cout << "&double_value : " << &double_value << endl;
    cout << "&reference_t_int_value_1 : " << &reference_to_int_value_1 << endl;
    cout << "&reference_to_int_value_2 : " << & reference_to_int_value_2 << endl;
    cout << "&reference_to_double_value_1 : " << &reference_to_double_value_1 << endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sieof(&int) : " <<sizeof(int&) << endl;
    cout << "sizeof(reference_to_int_value_1) : " << sizeof(reference_to_int_value_1) << endl;




    //Modify throught reference
    cout << endl;
    cout << "Modifying data throught reference : " << endl;

    reference_to_int_value_1 = 55;

    cout << "int_value : " << int_value << endl;
    cout << "double_value : " << double_value << endl;
    cout << "reference_to_int_value_1 : " << reference_to_int_value_1 << endl;
    cout << "reference_to_int_value_2 : " << reference_to_int_value_2 << endl;
    cout << "reference_to_double_value_1 : " << reference_to_double_value_1 << endl;
    cout << "&int_value :" << &int_value << endl;
    cout << "&double_value : " << &double_value << endl;
    cout << "&reference_t_int_value_1 : " << &reference_to_int_value_1 << endl;
    cout << "&reference_to_int_value_2 : " << & reference_to_int_value_2 << endl;
    cout << "&reference_to_double_value_1 : " << &reference_to_double_value_1 << endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sieof(&int) : " <<sizeof(int&) << endl;
    cout << "sizeof(reference_to_int_value_1) : " << sizeof(reference_to_int_value_1) << endl;


    return 0;
}