#include <iostream>
using namespace std;


int main(){

    int scores[] {10,12,15,11,18,17,22,23,24};

    //Can get the size with std::size
    cout << "Scores size : " << size(scores) << endl;

    //Print data out 
    for(size_t i{0}; i < size(scores); ++i){
        cout << "Scores [" << i << "] : " << scores[i] << endl;
    }


    return 0;
}