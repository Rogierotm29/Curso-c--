#include <iostream>
using namespace std;




int main(){
    float length, width, height, base_area, volume;

    cout << "Welcome to box calculator. Please type length, width and height information : \n";
    cout << "Length: ";
    cin >> length;
    cout << endl << "Width: ";
    cin >> width;
    cout << endl << "Height: ";
    cin >> height;
    cout << endl;

    base_area = width * length;
    volume = base_area * height;

    cout << "The base area is: " <<  base_area << endl;
    cout <<"The volume is: " << volume << endl;


    
}