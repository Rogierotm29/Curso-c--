#include <iostream>
using namespace std;


int main(){

    const unsigned int COUNT{10};
    unsigned int i {11}; //Initialization


    do{
        cout << "[" << i << "] : I love C++" << endl;
        ++i;//Incrementation

    }while(i < COUNT); //Test
}