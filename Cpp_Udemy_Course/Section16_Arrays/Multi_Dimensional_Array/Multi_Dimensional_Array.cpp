#include <iostream>
using namespace std;

int main(){

    const size_t name_length{15};
    char members [] [name_length] {
        {'J','o','h','n'},
        {'R','o','g','i','e','r','o'},
        {'A','l','e','i','k','a'},
        {'R','o','n','a','l','d','o'}

    };


    //Printing out like this is unsafe : may go over and print
    //outside your valid memory block
    //until a terminating null character is encountered.
    cout << "Unsafe printing of members : " << endl;
    for(size_t i{0}; i < size(members); ++i){
        cout << members[i] << endl;

    }

    //Can loop around manually printing each character

    cout << endl;
    cout << "Printing out characters by character manually : " << endl;
    for(size_t i{0}; i < size(members); ++i){
        for(size_t j{0}; j < size(members[i]); ++j){
            cout << members[i][j];
        }
        cout << endl;
    }



    return 0;
}