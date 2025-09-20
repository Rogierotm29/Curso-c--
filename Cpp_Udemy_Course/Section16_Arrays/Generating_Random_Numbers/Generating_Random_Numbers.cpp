#include <iostream>
using namespace std;


int main(){
    //Srand
    int random_num = rand();
    cout << "number : " << random_num << endl;

    random_num = rand();
    cout << "number : " << random_num << endl;

    cout << "RAND_MAX : " << RAND_MAX << endl; //32767

    //Range [0 ~ 10] : what you % with controls the upper bound

    int random_num2 = rand() % 11;
    cout << "number : " << random_num2 << endl;

    for (size_t i{}; i < 30; ++i){
        random_num2 = rand() % 11; //Will be between [0 ~ 10]
        cout << "number : " << random_num << endl;
    }




    return 0;
}