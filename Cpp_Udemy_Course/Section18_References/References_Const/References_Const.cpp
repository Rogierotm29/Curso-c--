#include <iostream>
using namespace std;

int main(){
    //Non const reference
    cout << endl;
    cout << "Non constant reference : " <<endl;
    int age {27};
    int& ref_age {age};

    
    cout << "age : " << age << endl;
    cout << "ref_age : " << ref_age << endl;

    //Can modify original variable through reference
    cout << endl;
    cout << "Modify original variable through reference : " << endl;

    ref_age++; //Modify through reference

    cout << "age : " << age << endl;
    cout << "ref_age : " << ref_age << endl;

    //const reference 
    cout << endl;
    cout << "Const references : " << endl;
    age = 30;
    const int& const_ref_age{age};

    cout << "age : " << age << endl;
    cout << "const_ref_age : " << const_ref_age << endl;

    //Try to modify through const reference
    // const_ref_age = 31; // Error
    age = 50;
    cout << "const_ref_age : " << const_ref_age << endl;
    

    //Simulating reference behavior with pointers
    const int* const p_age {&age};

    //*p_age++ = 36; // Error


    return 0;
    
}