#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5,8,9,11};

    //Element to be searched
    int target = 8;

    //check for the target in the vector v
    if(binary_search(v.begin(), v.end(), target)){
        //If the value is found 
        cout << target << " found.";
    }else{
        //If the value is not found
        cout << target << " NOT found.";
    }

    return 0;
}