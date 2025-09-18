#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Setw on numbers before you print them
    const size_t ROWS {12};
    const size_t COLS {3};

    for(size_t row{0}; row < ROWS; ++row){
        for(size_t col{0}; col < COLS; ++col){
            cout << "(row " << setw(2) << row << ",col " << setw(2) << col << ")";
        }
        cout << endl;
    }



    //do while loop
    int row = 0;
    int col = 0;

    do{
        do{
            cout << "(row " << setw(2) << row << ",col " << setw(2) << col << ")";
            ++col;
        }while(col < COLS);

        cout << endl;

        col = 0;
        ++row;
    }while(row < ROWS);


    //While Loop

    row = 0;
    col = 0;

    while(row < ROWS){
        while(col < COLS){
            cout << "(row " << setw(2) << row << ",col " << setw(2) << col << ")";
            ++col;
        }
        
        cout << endl;

        col = 0;
        ++row;
    }
}