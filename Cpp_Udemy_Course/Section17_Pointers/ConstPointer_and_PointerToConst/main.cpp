#include <iostream>

using namespace std;


int main(){

    //A raw variable that can be modified
    cout << endl;
    cout << "Raw vvariable that can be modified: " << endl;

    int number {5}; //Not constant, can change number any way we want
    cout << "number : " << number << endl;
    cout << "&number : " << &number << endl;
    //Modify
    number = 12;
    number += 7;


    //Access - Print out
    cout << "number : " << number << endl;
    cout << "&number : " << &number << endl;
    cout << endl;

    //Pointer : can modify the data and the pointer itself
    int *p_number1 {nullptr};
    int number1 {23};

    p_number1 = &number1;

    //change the pounted to value through pointer
    *p_number1 = 432;

    //Cjange the pointer itself to make it point somewhere else
    int number2 {56};
    p_number1 = &number2;

    //Ponter pointing to constant data : You can't modity the data through pointer

    int number3 {632}; //Althouh you can omit the const on number3 here and it is still
    //Going to compile, it is advised to be as explicit as possible in your code
    //and put the const in front. Make your intents CLEAR.

    const int* p_number3 {&number3}; //Cant modify number3 through p_number3
    //*p_number3 = 444; //Compile error

    //Although we can't change what's pointed to by p_number3,
    //we can still change where it's pointing

    int number4 {872};
    p_number3 = &number4;



    int protected_var {10}; //Caan make it const to protect it if we want.

    //p_protected_var is a pointer to const data, we cant't
    //modify the data through this pointer : regardless of 
    //whether the data itself is declared const or not.
    const int* p_protected_var{&protected_var};

    protected_var = 66;
    cout << endl;
    cout << "protected_var : " << protected_var << endl;
    cout << "p_protected_var : " << p_protected_var << endl;
    cout << "*p_protected_var : " << *p_protected_var << endl;
    cout << endl;




    //You can't set up a modifiable pointer to const data though,
    //You'll get a compiler error :Invalid convertion from 'const type*' to 'type*'.

    const int some_data {55};
    const int* p_some_data {&some_data};
    cout << "some_data : " << *p_some_data; 


    //pointer is constant (can't make it point anywere else)
    //but pointed to value can change
    cout << "Pointer is constant, pointed to value can change : " << endl;
    int number7 {982};

    int* const p_number7 {&number7};

    cout << "p_number7 : " << p_number7 << endl;
    cout << "*p_number7 : " << *p_number7 << endl;
    cout << "Changing value pointed to through p_number7 pointer : " << endl;

    *p_number7 = 456;
    cout << "The value pointed to by p_number7 now is : " << *p_number7 << endl;

    int number8 {2928};
    cout << "Changing the address where p_number7 is pointing ((compile Error))." << endl;



    int var1{33};
    int* p_var {&var1}; //non constant pointer to int
    const int* p_var3 {&var1}; //Pointer to const
    const int* const p_var4 {&var1}; //Const pointer to const data
    int* const p_number7 {&number7}; //Const pointer to non const data

    //If const shows up on the left of * : the data is const
    //If const shows on the right of * : the pointer in const



    return 0;
}