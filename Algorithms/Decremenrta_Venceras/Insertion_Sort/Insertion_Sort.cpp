#include <iostream>
#include <vector>

int main(){
    std::vector<int> arr {12,11,13,5,6};
    int n = arr.size();

    for(size_t i{0}; i < n; ++i){
        int c = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > c){
            arr[j + 1] = arr[j];
            j -= 1; 
        }
        arr[j + 1] = c;
    }

    for(size_t i{0}; i < n; ++i){
        std::cout << arr[i] << " ";
    }
    return 0;
}