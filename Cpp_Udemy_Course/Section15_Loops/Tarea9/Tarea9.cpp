#include "iostream"
using namespace std;

int main(){
    unsigned int sum{};
    
    //Don't modify anything above this line
    //Your code will go below this line
    for(size_t i{0}; i < 100; ++i){
        cout << i << endl;
        sum += i;
    }
    
    //Your code will go above this line
    //Don't modify anyting below this line

     return sum;
}