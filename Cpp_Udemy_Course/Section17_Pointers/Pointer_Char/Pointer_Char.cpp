#include <iostream>
using namespace std;


int main(){

    //Can use normal pointer to char like we've been doing for
    //double, int and anything else really
    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    cout << "The value stored in p_char_var is : " << *p_char_var << endl;

    char char_var1 {'C'};
    p_char_var = &char_var1;

    cout << "The value stored in p_char_var is : " << *p_char_var << endl;

    //Pointer to char can also do something special 
    //You can initialize with a string literal : C-string

    char* p_message {"Hello World!"};
    cout << "The message is :  " << p_message << endl;

    //What do we get when we deference the pointer 
    cout << "The value storedat p_message is : " << *p_message << endl;


    //Allow users to modify the string
    char message1 [] {"Hello World!"};
    message1[0] = 'B';
    cout << "message1 : " << message1 << endl;


    return 0;
}