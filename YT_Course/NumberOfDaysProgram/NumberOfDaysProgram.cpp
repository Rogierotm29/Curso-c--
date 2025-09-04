#include <iostream>
using namespace std;


int main(){
    int year, month;

    // Number of days in a month program
    // Input: year and month
    // Output: number of days in the specified month of the specified year
    cout<<"Year, month: ";
    cin >> year >> month;

    //(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    
    switch(month){
        case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)? 
            cout <<" tiene 29 dias.\n":
            cout <<" tiene 28 dias.\n"; 
            break;
        //Aqui como esos meses tiene 30 dias no se tiene que poner un cout en cada uno
        //ya que son los mismos va a salir del switch cuando llegue al break entonces 
        //no hay problema ya que si pones 4 o 6 o 9 o 11 va a salir del switch en el 11 ya que
        //contiene el break mas cerca
        case 4:
        case 6:
        case 9:
        case 11: cout <<"Tiene 30 dias \n"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout <<"Tiene 31 dias \n"; break;
        default: cout <<"Mes invalido\n"; break;
        
    }

    system("pause>0");
}