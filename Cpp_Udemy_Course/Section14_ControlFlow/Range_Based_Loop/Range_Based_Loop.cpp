#include <iostream>
using namespace std;


int main(){




    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers
    //The variable value will be assigned from the values arrray on each iteration

    for (int value : bag_of_values){
        //Value holds a copy of the current iteration in the whole vag
        cout << "value : " << value << endl;
    }
}