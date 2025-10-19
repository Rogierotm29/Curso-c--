#include <iostream>
using namespace std;

int main(){

    int scores[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Printing positions
    cout << endl;

    cout << "Scores : ";
    for( auto score : scores){
        cout << " " << score;
    }

    cout << endl;

    //Modification attempt
    for( auto score : scores){
        score = score*10; //Modifies copy of values in scores
    }

    //Print out
    cout << "Scores : ";
    for ( auto score : scores){
        cout << " " << score;
    }
    cout << endl;

    //References to the rescue
    for (auto& score : scores){
        score = score * 10;
    }

    //Print out 
    cout << "Scores : ";
    for (auto score : scores){
        cout << " " << score;
    }
    cout << endl;
    

    return 0;
}