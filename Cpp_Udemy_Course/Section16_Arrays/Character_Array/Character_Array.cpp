#include <iostream>
using namespace std;


int main(){
    //Declare array
    char message [5] {'H', 'E', 'L', 'L', 'O'};

    cout << message << endl;

    //print out the array through looping 
    cout << "message : " << endl;
    for(auto c : message){
        cout << c;
    }

    cout << endl;
    cout << "Size : " << size(message) << endl;

    //Can also modify elemts of the char array

    cout << endl;
    cout << "Modify array data : " << endl;

    message[1] = 'a';

    //Print out the array
    cout << "message : ";
    for(auto c : message){
        cout << c;
    }

    //Can also define a literal C string 
    cout << endl;
    char message4 [] {"Hello"};


    cout << "message4 : " << message4 << endl;
    cout << "size : " << size(message4) << endl;





    return 0;
}