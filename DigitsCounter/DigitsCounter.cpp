#include <iostream>
using namespace std;


int main(){
    //Count digits of a number

    long long number;
    cout<<"Number: ";
    cin>> number;


    if(number == 0)
      cout <<"Haz ingresado el numero 0\n";
    else{
      if(number < 0)
        number = abs(number);
      int counter = 0;
      while(number > 0){
        number /= 10; // Remove the last digit
        counter++;

      }
      cout <<"El numero de digitos de tu numero es: "<< counter<<endl;

    }
    
    system("pause>0");
}