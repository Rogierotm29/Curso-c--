#include <iostream>
#include <vector>

using namespace std;


int main(){
    std::vector<int> arr {10,3,18,20,4,1,9};

    int size = arr.size();

    for(size_t i{0}; i < size -1; ++i){
        int indexMin = i;
        for(size_t j{i}; j < size; ++j){
            if(arr[j] < arr[indexMin]){
                indexMin = j;
            };

        };
        int aux = arr[indexMin];
        arr[indexMin] = arr[i];
        arr[i] = aux;
    };

    for(size_t i{0}; i < size; ++i){
        std::cout << arr[i] << " "; 
    };

    return 0;
}