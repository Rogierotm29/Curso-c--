#include <iostream>

using namespace std;


int main(){
    int data [] {11,2,52,53,9,13,5,7,12,11};
    unsigned int size = (sizeof(data) / sizeof(data[0]));
    int * max_address = &data[0];

    cout << *max_address;

    for(size_t i{0}; i < size; ++i){
        if(data[i] > *max_address){
            max_address = &data[i];
        }
    }

}