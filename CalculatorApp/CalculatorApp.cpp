#include <iostream>
using namespace std;


int main(){

    //Calculadora

    float num1, num2;
    char operation;

    cout<<"Calculadora basica\n";
    cin >> num1 >> operation >> num2;


    //Lo que va dentro del switch es lo que va a checar
    switch(operation)
    {
    case '+':cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; break;
    case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; break;
    case '*':cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; break;
    //Aqui agregamos un if para evitar la division por cero
    case '/':
        if(num2 != 0){
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else{
            cout <<"Error: Division by zero is not allowed.\n";
        } break;

    //Aqui como no puedes hacer modulo con decimales verificamos primero si el numero es entero
    case '%':
        bool isNum1Int, isNum2Int;
        //Aqui verificamos si los numeros son enteros
        //le quita la decimal al valor ingresado y si es igual al valor original entonces se hace la opreacion
        //Ya que los 2 son numeros enteros, si uno de los 2 o los 2 son diferentes cuando les quitas la decimal 
        //entonces no se va a poder hacer la operacion
        (int)num1 == num1 ? isNum1Int = true : isNum1Int = false;
        (int)num2 == num2 ? isNum2Int = true : isNum2Int = false;
        if(isNum1Int && isNum2Int){
            cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        else{
            cout <<"Error: Modulus operation requires both numbers to be integers.\n";
        } break;
    default: cout <<"Error: Invalid operation.\n"; break;
        
    }




    system("pause>0");
}