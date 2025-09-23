#include <iostream>
using namespace std;


int main(){

    //Declaring a 2d int array
    int packages [4][3]; //Occupies 48 bytes in memory

    cout << "Size of packages :" << sizeof(packages) << endl; //Occupied memory

    //Element count in packages will be 4. Because packages contains 4 rows and 3 columns, we
    // can say that packages contains 4 items, each of which contains three items.
    cout <<"element cout in packages : " << size(packages) << endl;

    //The 2d array contains garbage data by default, lets print it out
    //Using harcoded values 4 and 3 (magic numbers)
    cout << endl;
    cout <<"Print out un-initialized array using magic numbers for dimensions : " << endl;
    for(size_t i{0}; i < size(packages); ++i){
        for(size_t j{0}; j < size(packages[i]); ++j){
            cout <<"Item ( " << i << "," << j << ") : " << packages[i][j] << endl;
        }
    }

    //Initializing the array with data

    int packages1 [4] [3]{
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    //If we print it, we'll see the numebrs
    //Print packages1
    cout << endl;
    cout << "Printing out initialized 2d array packages1 : " << endl;
    for(size_t i{0}; i < size(packages1); ++i){
        for(size_t j{0}; j < size(packages1[i]); ++j){
            cout <<"Item (" << i << "," << j << ") : " << packages1[i][j] << endl;
        }
    }


    //3d arrays are defined in the same way. We just use three sets of indexes 
    //3 lights per room, 5 rooms per house 7 houses per block
    int house_block [7] [5] [3] {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}
        },
        {
            {31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45}
        },
        {
            {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}
        },
        {
            {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75}
        },
        {
            {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}
        },
        {
            {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105}
        }
    };

    cout << endl;
    cout << "Printing out 3d house_block array : " << endl;
    for(size_t i{0}; i < size(house_block); ++i){
        for(size_t j{0}; j < size(house_block[i]); ++j){
            cout << "[";
            for(size_t k{0}; k < size(house_block[i][j]); ++k){
                cout << house_block[i][j][k] << " ";
            }
            cout << "]";
        }
        cout << endl;
    }




    return 0;
}