#include <iostream>
using namespace std;

int main(){

    //Write all the numbers between 100-500 that area
    //divided by 3 and 5
    int counter = 100;
    cout << "Numbers between 100 and 500 that are divisible by 3 and 5:\n";
    while(counter <= 500){
        if(counter % 3 == 0 && counter % 5 ==0){
            cout << counter <<"  es divisible by 3 and 5\n";
            counter++;
        }
        else{
            counter++;
        }
    }



    system("pause>0");
}