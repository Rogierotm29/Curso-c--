#include <iostream>
using namespace std;

int main(){
    //How we´ve used pointers so far
    int number {22};

    int* p_number = &number;

    cout << endl;
    cout << "Declaring pointer and assigning address : " << endl;
    cout << "number : " << number << endl;
    cout << "p_number : " << p_number << endl;
    cout << "&number : " << &number << endl;
    cout << "*p_number : " << *p_number << endl;


    int* p_number1; // Uninitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1; //Make it point to a valid address
    cout << endl;
    cout << "Uninitialized pointer : " << endl;
    cout << "*p_number1 : " << *p_number1 << endl;



    //It is also possible to initialize the pointer with a valid
    // address up on declaration. Not with a nullptr
    int* p_number5 {new int}; // Memory location contains junk value
    int* p_number6 {new int(22)}; // use direct initialization
    int* p_number7 {new int {23}}; // use information initialization

    cout << endl;
    cout << "Initialize with valid memory address at declaration : " << endl;
    cout << "p_number5 : " << p_number5 << endl;
    cout << "*p_number5 : " << *p_number5 << endl; //Junk value

    cout << "p_number6 : " << p_number6 << endl;
    cout << "*p_number6 : " << *p_number6 << endl;

    cout << "p_number7 : " << p_number7 << endl;
    cout << "*p_number7 : " << *p_number7 << endl;


    //Remember to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;
    

    return 0;
}