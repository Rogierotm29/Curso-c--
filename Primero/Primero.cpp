#include <iostream>
using namespace std;

int main() {
    float annualSalary;
    cout << "Enter your annual salary: ";
    cin >> annualSalary;

    // calcula el salario mensual
    float monthlySalary = annualSalary / 12;

    // imprime el salario mensual y lo que ganara en 10 años
    cout << "Your monthly salary is: " << monthlySalary << endl;
    cout <<"In 10 year, you will earn "<< annualSalary * 10;

    char character = 'a';
    system("pause>0");
}
