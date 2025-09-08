#include <iostream>
using namespace std;



int main(){
    int number1 {80};
    int number2 {60};

    bool result = (number1 < number2);

    /*
   

    //boolalp
    cout << boolalpha << result << endl;

    cout << endl;
    cout << "Free standing if statement" << endl;


    //if(result)
    if(result == true){
        cout << number1 <<" is lees than " << number2 << endl;

    }
    if(result != true) {
        cout << number1 << " is not less than " << number2 << endl;
    }
    */

    /*
    //Using else
    if(result == true){
        cout <<  number1 << " is lees than " << number2 << endl;
    }
    else{
        cout << number1 << " is NOT lees than " << number2 << endl;
    }
    */

    //Use expression as condition directly

    /*    
    if(number1 > number2){
        cout << number2 << " is less than " << number1 << endl;
    }
    else{
        cout << number1 << " is less than " << number2 << endl;
    }
    */


    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {false};


    if (green && !police_stop ){
        cout <<"Go" << endl;
    }
    else{
        cout << "Stop " << endl;
    }


    
    


    return 0;

    
}