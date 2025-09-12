#include <iostream>
using namespace std;

int main(){
    int day, days_passed;
    cout << "Which day is today [1 : Monday, ...., 7 : Sunday] : " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout <<"Today is Monday. Let's have some fun. " << endl;
        break;
    case 2:
        cout <<"Today is Tuesday. Let's have some fun. " << endl;
        break;
    case 3:
        cout <<"Today is Wednesday. Let's have some fun. " << endl;
        break;
    case 4:
        cout <<"Today is Thursday. Let's have some fun. " << endl;
        break;
    case 5:
        cout <<"Today is Friday. Let's have some fun. " << endl;
        break;
    case 6:
        cout <<"Today is Saturday. Let's have some fun. " << endl;
        break;
    case 7:
        cout <<"Today is Sunday. Let's have some fun. " << endl;
        break;
    default:
        cout << day << " is not a valid day. Bye! " << endl;
        return 0;
    }

    cout << "How many days have passed up to today : " << std::endl;
    cin >> days_passed;
    int normalized_diff = days_passed % 7;

    // Corrección: mantener el rango 1–7
    int day_in_the_past = ((day - normalized_diff - 1 + 7) % 7) + 1;

    cout << "If we went " << days_passed << " days in the past we would hit a ";
    switch (day_in_the_past)
    {
    case 1:
        cout <<"Monday" << endl;
        break;
    case 2:
        cout <<"Tuesday" << endl;
        break;
    case 3:
        cout <<"Wednesday" << endl;
        break;
    case 4:
        cout <<"Thursday" << endl;
        break;
    case 5:
        cout <<"Friday" << endl;
        break;
    case 6:
        cout <<"Saturday" << endl;
        break;
    case 7:
        cout <<"Sunday" << endl;
        break;
    default:
        cout << day_in_the_past << " is not a valid day. Bye! " << endl;
        break;
    }

    return 0;
}
