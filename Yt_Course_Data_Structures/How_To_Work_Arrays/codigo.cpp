#include <iostream>
using namespace std;



int main(){

    //Total, Average, inTwoYears
    float months_Array[12];

    float total, average, inTwoYears;
    for(size_t i{0};  i < size(months_Array); ++i){
        cout << "Ingrese lo ahorrado en el mes [" << i + 1<< "] : ";
        cin >> months_Array[i];
        total += months_Array[i];
    }

    average = total / size(months_Array);

    inTwoYears = average * 24;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "In Two Years = " << inTwoYears << endl;


    return 0;
}