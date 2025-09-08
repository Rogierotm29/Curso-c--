#include <iostream>
using namespace std;


int main(){
    bool a {true};
    bool b {true};
    bool c {true};
    bool d {true};

    bool p {false};
    bool q {false};
    bool r {false};
    bool m {true};

    //AND: If one of the operands is 0, the results is 0
    cout << endl;
    cout <<"AND short circuit " << endl;
    bool result = a && b && c && d;
    cout << "result : " << boolalpha << result << endl;

    //OR : If one of the operands is 1, the result is 1.
    cout << endl;
    cout << "OR short circuit " << endl;
    result = p || q || r || m;
    cout << "result : " << boolalpha << result << endl;
}