#include <iostream>
using namespace std;



void showMenu(){
    cout << "Welcome to the ATM machine" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Exit" << endl;
}

void checkBalance(float balance){
    cout <<endl;

    cout <<"Your balance is: $" <<balance<<endl;
}

float depositMoney(float balance){
    cout <<endl;
    float deposit;
    cout <<"Enter the amount to deposit: ";
    cin >> deposit;
    cout <<endl;

    return balance + deposit;
}

float withdrawMoney(float balance){
    float withdrawAmount;
    
    bool condition = true;
    while(condition = true){
        cout <<endl;

        cout <<"Your balance to with draw money is: $"<<balance <<endl;
        cout <<"Enter the amount of money you want to withdraw: ";
        cin >> withdrawAmount;

        if(withdrawAmount > balance){
            cout<<"You dont have the funds to make that withdraw, try again" <<endl;
        }
        else{
            cout <<"Succesfull withdraw of amount: $"<<withdrawAmount<<endl;
            return balance - withdrawAmount;
        }

    }
    
    

}

int main(){

    // ATM machine
    // check balance, deposit money, withdraw money, show menu
    int option = 0;
    float balance = 100000.0;


    while(option !=4){
        cout <<endl;
        showMenu();
        cout << "Choose an option: ";
        cin >> option;

        switch(option){
            case 1: checkBalance(balance); break;
            case 2: balance = depositMoney(balance); break;
            case 3: balance = withdrawMoney(balance); break;
            case 4: break;

        }


        
    }

    


}