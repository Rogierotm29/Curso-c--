#include <iostream>
using namespace std;


int main(){
    //El usuario debe inresar 3 numeros los 3 lados de un triangulo y el programa determina si es equilatero, isosceles o escaleno

    //Aqui definimos el valor de los lados del triangulo
    float lado1, lado2, lado3;

    //Aqui solicitamos que ingrese el usuario los lados del triangulo
    cout << "Este programa determina si un triangulo es equilatero, isosceles o escaleno\n";
    cout<<"Ingrese el primer lado del triangulo: ";
    cin >> lado1;
    cout<<endl<< "Ingrese el segundo lado del triangulo: ";
    cin >> lado2;
    cout<<endl<< "Ingrese el tercer lado del triangulo: ";
    cin >> lado3;


    //Aqui determinamos si el triangulo es equilatero, isosceles o escaleno
    if(lado1 == lado2 && lado2 == lado3){
        cout<<"El triangulo es equilatero\n";
    }
    else if(lado1 ==lado2 || lado1 == lado3 || lado2 == lado3){
        cout<<"El triangulo es isosceles\n";
    }
    else{
        cout<<"El triangulo es escaleno\n";
    }
    
    system("pause>0");
}