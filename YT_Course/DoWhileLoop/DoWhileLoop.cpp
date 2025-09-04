#include <iostream>
using namespace std;



int main(){
    int usersPin = 1234, pin, errorCounter = 0;

    do {
        cout <<"PIN: ";
        cin >>pin;
        if(pin != usersPin){
            errorCounter ++;

        }

    }while(errorCounter < 3 && pin != usersPin );  // primero corre y luego checa la condicion a ver si se cumple o no

    if(errorCounter < 3)
        cout<<"Loading...\n";
    else
        cout <<"Bloacked\n";

    system("pause>0");
}