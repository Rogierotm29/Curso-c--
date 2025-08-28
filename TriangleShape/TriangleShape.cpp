#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    int length;
    char symbol;
    cout<<"Enter the height of the triangle: ";
    cin >> length;
    cout <<"Enter the symbol to create the triangle shape: ";
    cin >> symbol;
    cout <<endl;

    for(int i = length; i >= 0; i--){
        for(int j = 1; j <= i; j++){
            cout <<setw(3) << symbol;
        }
        cout<<endl;
    }
}