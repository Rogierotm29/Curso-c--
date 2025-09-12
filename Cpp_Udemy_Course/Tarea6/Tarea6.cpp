#include <iostream>
using namespace std;



int main(){
    int day;
    cout << "Wich day is today [1 : Monday, ...., 7 : Sunday] : " << endl;
    cin >> day;


    switch (day)
    {
    case 1:
        cout <<"Today is Monday.Let's have some fun. " << endl;
        break;
    case 2:
        cout <<"Today is Thuesday.Let's have some fun. " << endl;
        break;
    case 3:
        cout <<"Today is Wednesday.Let's have some fun. " << endl;
        break;
    case 4:
        cout <<"Today is Thursday.Let's have some fun. " << endl;
        break;
    case 5:
        cout <<"Today is Friday.Let's have some fun. " << endl;
        break;
        
    case 6:
        cout <<"Today is Saturday.Let's have some fun. " << endl;
        break;

    case 7:
        cout <<"Today is Sunday.Let's have some fun. " << endl;
        break;

    default:
        cout << day << " is not a valid day. Bye! " << endl;
        break;
    }

    return 0;
}