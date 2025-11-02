#include <iostream>
#include <vector>

int SequentialSearch(std::vector<int> arr, int x){
    for(size_t i{0}; i < arr.size(); ++i){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}


int main(){

    std::vector<int> arr {10,11,421,556,87,4343,8787,20,12,23,43};
    int x = 20;

    int index = SequentialSearch(arr,x);

    if(index == -1){
        std::cout << "Element not present\0";
    }else{
        std::cout << "Element present at index : " << index << std::endl;
    }

    return 0;
}