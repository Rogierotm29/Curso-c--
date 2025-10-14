#include <iostream>

using namespace std;



int main(){

    //Array of const pointer to const char
    const char * const students []{
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    //can't swap for new students if it is const pointer to const
    //const char * new_student {"Rogiero"};

    //students[0] = new_student;

    //Print out the students
    cout << endl;
    cout << "Printing out the students : " << endl;
    for( const char * student : students){
        cout << student << endl;
    }

    return 0;
}