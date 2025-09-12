#include <iostream>
using namespace std;



int main(){
    float Celsius, Fahrenheit;

    cout << "Please enter a degree value in Celsius : " << endl;
    cin >> Celsius;

    Fahrenheit = (9.0/5) * Celsius + 32;

    cout << Celsius << " Celcius is " << Fahrenheit << " Fahrenheit " << endl;


    return 0;
}