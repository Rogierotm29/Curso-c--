#include <iostream>
#include <vector>



int main(){

    std::vector<int> arr {4,10,12,43,20,50,1};
    int size = arr.size();

    for(size_t i{0}; i < size - 1; ++i){
        bool change = false;
        for(size_t j{0}; j < size - i - 1; ++j){
            if(arr[j] > arr[j + 1]){
                change = true;
                int aux = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = aux;
            }
        }
        if(change == false){
            break;
        }
    }


    for(size_t i{0}; i < size; ++i){
        std::cout << arr[i] << " ";
    }
    return 0;
}