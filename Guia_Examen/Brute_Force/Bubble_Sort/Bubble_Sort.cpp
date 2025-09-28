#include <iostream>
using namespace std;


int main(){

    int a[] {4,8,1,5,9,0,2,7,3,6};

    int length = 10;

    for(size_t i{0}; i < length; ++i){
        for(size_t j{0}; j < length - 1; ++j){
            if(a[j] > a[j + 1 ]){
                int temp{};
                temp = a [j + 1];
                a [j + 1] = a [j];
                a[j] = temp;
            }
        }
    }

    for(int i : a){
        cout << a[i] << " ";
    }

    return 0;
}