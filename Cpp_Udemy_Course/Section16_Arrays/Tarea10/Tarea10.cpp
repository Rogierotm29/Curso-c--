#include <iostream>
#include <ctime>

using namespace std;


int main(){
    srand(time(0));
    
    cout << "Welcome to the greatest calculator on Earth!" << endl;
    
    int number1, number2, result, guess;
    char operand [5] {'-','+','*','/','%'};

    bool end {false};

    while(!end){
        number1 = (rand() % 400);
        number2 = (rand() % 300);
        int operand_check = (rand() % 5);
        char go_on;

        switch (operand_check)
        {
        case 0:
            cout << "What's the result of " << number1 << " - " << number2 <<" : ";
            result = number1 - number2;
            cin >> guess;
            break;
        case 1:
            cout << "What's the result of " << number1 << " + " << number2 <<" : ";
            result = number1 + number2;
            cin >> guess;
            break;

        case 2:
            cout << "What's the result of " << number1 << " * " << number2 <<" : ";
            cin >> guess;
            result = number1 * number2;
            break;

        case 3:
            cout << "What's the result of " << number1 << " / " << number2 <<" : ";
            cin >> guess;
            result = number1 / number2;
            break;

        case 4:
            cout << "What's the result of " << number1 << " % " << number2 <<" : ";
            cin >> guess;
            result = number1 % number2;
            break;

        
        default:
            break;
        }
        if(guess == result){
            cout << "Congratulations! You got the result " << result << " right!";
            end = true;
        }else{
            cout <<"Naah! the correct result is : " << result << endl;
            cout << "Do you want to try again? (Y | N) :";
            cin >> go_on;

            if(go_on == 'Y' || go_on == 'y'){
                end = false;
            }else{
                end = true;
                cout << "Seeyou later!" << endl;
            }
        }
            
    }






    return 0;
}