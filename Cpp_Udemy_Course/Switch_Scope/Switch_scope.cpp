#include <iostream>
using namespace std;



int main(){


    //No {} on cases
    int int_condition { 0 };

    switch (int_condition)
    {
    case 0:
        cout << "We are dealing with 0" << endl;
        cout << "Another statement in case 0" << endl;
        break;
    case 1: 
        cout << "We are dealing with 1" << endl;
        cout << "Some other statement " << endl;
        break;
    
    default:
        cout << "We are not dealing with 0 nor 1 " << endl;
        cout << "Some other statement " << endl;
        break; //This break is optional but gives sign of good practice.
    }


    //Giant scope
    switch (int_condition)
    {
        int x;
    case 0:
        int y;
        x = 4;
        x ++;
        break;

    case 1:
        int z;
        y = 5;
        y += 5;
        break;
    default:
        int u;
        z = 4;
        z++;
        break;
    }
    //It doesn't matter if you declare a variable in an especific case 
    // you can use it in any other case. The switch is just a big scope.


    return 0;
}