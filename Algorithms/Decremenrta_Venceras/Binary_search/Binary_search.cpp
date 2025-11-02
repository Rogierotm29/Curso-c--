#include <bits/stdc++.h>


int main(){

    std::vector<int> v = {1,2,3,4,5,8,9,11};

    int x = 5;
    int index = -1;

    int n = v.size();

    int l = 0;
    int r = n -1;
    while(l <= r){
        int i = l +  (r - l) / 2;
        if(v[i] == x){
            index = i;
            break;
        }else if(x < v[i]){
            r = i - 1;
        }else{
            l = i + 1;
        }
    }

    if(index != -1){
        std::cout << "El elemento esta en el index : " << index;
    }else{
        std::cout << "No esta el elemento";
    }



}