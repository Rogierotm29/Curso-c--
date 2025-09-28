#include <iostream>
using namespace std;

// void function definition
void hello() {
    cout << "GeeksforGeeks" << endl;

}

//Return-type function definition
int square(int x){
    return x * x;
}

int main(){
    //calling the void function
    hello();

    // Calling the return-type function
    int result = square(5);
    cout << "Square of 5 is: " << result << endl;


    return 0;
}