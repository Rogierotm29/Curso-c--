#include <iostream>
using namespace std;


bool isPrimeNumber(int number){
    for(int i=2; i < number; i++){
        if(number % i ==0){
            return false;
        }

    }
    return true;


}

int main(){
    int counter = 0;

    for(int i = 1; i <=100000 ; i++){
        bool isPrime = isPrimeNumber(i);
        if(isPrime){
            cout << i <<" is a prime number"<<endl;
            counter ++;
        }
    }
    cout << "There are " << counter << " prime numbers between 1 and 100,000"<<endl;


}



