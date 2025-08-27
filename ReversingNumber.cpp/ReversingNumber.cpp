#include <iostream>
using namespace std;



int main(){

    //Reversing number

    int number;
    int reversedNumber = 0;//0
    cout<<"Number: ";
    cin >>number;//123


    while(number != 0){
        reversedNumber *= 10;
        int lastDigit = number % 10; // Get the last digit
        reversedNumber += lastDigit; // Add the last digit to the reversed number
        number /= 10; //Quitamos el ultimo digito del numero

    }

    cout<<"Reversed number: "<<reversedNumber<<endl;
    system("pause>0");

}
