#include <iostream>

using namespace std;


int main(){
    int Array [6] {10,50,11,55,2,12};



    for(size_t i{0}; i < size(Array) - 1; ++i){
        size_t min_index = i;
        for(size_t j{i + 1}; j < size(Array); ++j){
            if(Array[j] < Array[min_index]){
                min_index = j; 
            }
        }

        if(min_index != i){
            int temp = Array[i];
            Array [i] = Array[min_index];
            Array[min_index] = temp;
        }
    }
    

    for(int i : Array){
        cout << i << " ";
    }


    return 0;
}