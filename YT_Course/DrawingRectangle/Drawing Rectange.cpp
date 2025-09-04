#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    int width, height;
    char symbol;
    cout <<"Enter the width of the rectangle: ";
    cin >> width;
    cout <<endl<<"Enter the height of the rectangle: ";
    cin >> height;
    cout<<endl<<"Enter the symbol to create the rectangle shape: ";
    cin >> symbol;
    cout<<endl;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << setw(3) << symbol;
        }
        cout<<endl;
    }



}