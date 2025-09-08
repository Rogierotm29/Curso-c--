#include <iostream>
#include <string>
using namespace std;

//Tools 
const int Pen{ 10 };
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };
const int Circle { 50 };
const int Ellipse { 60 };

int main(){
    int tool{ Pen };

    if( tool == Ellipse){
        cout <<"You are using an Ellipse " << endl;
    }
    else if ( tool == Pen) {
        cout << "You are using a Pen " << endl;
    }
    else if ( tool == Marker){
        cout << "You are using an Eraser " << endl;

    }
    else if ( tool == Rectangle){
        cout << "You are using a rectangle " << endl;
    }
    else if ( tool == Circle){
        cout << "You are using a circle " << endl;
    }
}