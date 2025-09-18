#include <iostream>
using namespace std;



int main(){
    int location_x , location_y, limit_x_positive {20}, limit_y_postive {10}, limit_x_negative {-20}, limit_y_negative {-10};
    cout << "Welcome to territory control. Please type in your x and y positions " << endl;
    cout << "Type in your x location : " << endl;
    cin >> location_x;

    cout << "Type in your y location : " << endl;
    cin >> location_y;

    if((location_x < limit_x_positive && location_y < limit_y_postive)&& (location_x > limit_x_negative && location_y > limit_y_negative)){
        cout << "You are completely surounded. Don't move!" << endl;
    }else{
         cout <<"You're out of reach! " << endl;
    }

    return 0;
}