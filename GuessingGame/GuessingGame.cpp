#include <iostream>
using namespace std;



int main(){

    int hostUserNum, guestUserNum;

    cout << "Welcome to the Guessing Game!" << endl;

    cout <<"Host: ";
    cin >> hostUserNum;
    system("cls");

    cout <<"Guest: ";
    cin >> guestUserNum;


    (hostUserNum == guestUserNum) ? cout <<"Correct " : cout <<"Incorrect";

    // Check if the guest's guess is correct
    /*if(guestUserNum == hostUserNum){
        cout << "Congratulations! You guessed the number correctly!" << endl;
    }
    else{
        cout<< "Sorry you lost\n";
    } */




    system("pause>0");
}