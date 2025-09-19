#include <iostream>
using namespace std;


int main(){
    cout << "rangebased for loop without initializer : " << endl;

    double multiplier1 {4};

    for(auto value: {1,2,3,4,5,6,7,8,9,10}){
        //Value holds a copy of the current iteration in the whole bag
        cout << "result : " << (value * multiplier1) << endl;
    }
    cout << "multiplier1 : " << multiplier1 << endl;

    //Ranged based for loop with initializer
    for (double multiplier2{4}; auto value : {1,2,3,4,5,6,7,8,9,10}){
        //value holds a copy of the current iteration in the wholebag
        cout << " result : " << (value * multiplier2) << endl;
    }
}