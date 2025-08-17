#include <iostream>
using namespace std;



int main(){


    //Este programa recibe un numero y determina si es un numero par o impar
    int a;
    cout <<"Ingrese un numero para saber si es par o impar: ";
    cin >> a;

    if (a % 2 ==0){
        cout <<"El numero " << a << " es par\n";
    }
    else{
        cout<<"Su numero "<< a << " es impar\n";
    }


    system("pause>0");
}