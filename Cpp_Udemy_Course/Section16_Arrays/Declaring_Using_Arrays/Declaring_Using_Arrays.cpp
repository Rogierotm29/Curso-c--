#include <iostream>
using namespace std;



int main(){

    /*
    //Declaring an array
    int scores[10]; //An array storing 10 integers

    //Reading values
    cout << endl;
    cout << "Reading out score values (manually) : " << endl;
    cout << "Scores[0] : " << scores[0] << endl;
    cout << "Scores[1] : " << scores[1] << endl;
    cout << "Scores[2] : " << scores[2] << endl;
    cout << "Scores[3] : " << scores[3] << endl;
    cout << "Scores[4] : " << scores[4] << endl;
    cout << "Scores[5] : " << scores[5] << endl;
    cout << "Scores[6] : " << scores[6] << endl;
    cout << "Scores[7] : " << scores[7] << endl;
    cout << "Scores[8] : " << scores[8] << endl;
    cout << "Scores[9] : " << scores[9] << endl;

    //Can read through a loop
    for(size_t i{0}; i < 10; ++i){
        cout << "Scores [" << i << "] : " << scores[i] << endl;
    }
    */

    int scores [10]; //Array storing 10 integers

    //Writing data in an array
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    cout << endl;
    cout << "Manually writing data in array : " << endl;
    for(size_t i{0}; i < 10; ++i){
        cout <<"Scores[" << i  << "] : " << scores[i] << endl;
    }
    

    //Declare and initialize at the same time
    cout << endl;
    cout <<"Declare and initialze at the same time : " << endl;

    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i{0}; i < 5; ++i){
        cout << "Salary [" << i << "] : " << salaries[i] << endl;
    }

    //If you don't initialize all the elements, those you leave out 
    //are initalized to 0

    cout << endl;
    cout << "Leaving out some elements un-initialized : " << endl;

    int families[5] {12,7,5};

    for(size_t i{0}; i < 5; ++i){
        cout <<"Families[" << i << "] : " << families[i] << endl;
    }

    cout << endl;
    //Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17};

    for(auto value : class_sizes){
        cout << "value : " << value << endl;
    }


}