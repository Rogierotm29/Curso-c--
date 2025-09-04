#include <iostream>
using namespace std;


int main(){
    //The factorial of a number
    //6! = 1 * 2 * 3 * 4 * 5 * 6 = 720

    int number;
    cout <<"Ingresa el numero del que quieras calcular el factorial: ";;
    cin >> number; //3
    int factorial = 1; //6


    //for (int i = 1; i <= number  ; i++){//i =4
    //    factorial *= i; //factorial = factorial * i
    //}

    for(int i = number; i >=1; i--){
        factorial *= i;
    }
    cout <<endl << "El numero factorial es: "<< factorial <<endl;


}