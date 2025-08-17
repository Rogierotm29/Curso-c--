#include <iostream>
using namespace std;


int main(){
    //BMI calculator
    //weight(kg) / height * height(m)
    //Underweight < 18.5
    //Normal weight 18.5 - 24.9
    //Overweight 25 - 29.9
    //Obesity >= 30

    float weight, height, bmi;
    cout<<"Ingresa tu peso en kg: ";
    cin >> weight;
    cout <<"Ingrese su estatura en m: ";
    cin >> height;

    //Calcula BMI
    bmi = weight / (height * height);

    if(bmi < 18.5){
        cout << "Tu bmi es: " << bmi << " (Bajo peso)\n";

    }
    else if(bmi >=18.5 && bmi < 24.9){
        cout <<"Tu bmi es: " << bmi << " (Peso nomral)\n";
    }
    else if(bmi >=25 && bmi < 30){
        cout <<"Tu bmi es: " << bmi << " (Sobrepeso)\n";
    }
    else{
        cout <<"Tu bmi es: " << bmi << " (Obesidad)\n";
    }





    system("pause>0");
}