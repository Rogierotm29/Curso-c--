#include <iostream>
using namespace std;




int main(){
    int multiplier;
    cout<<"Enter the multiplier to know its multiplication table: ";
    cin>>multiplier;


    for(int i = 1; i <=10; i++){
        cout <<multiplier <<" x " << i <<" = "<< multiplier * i << endl;
    }
}