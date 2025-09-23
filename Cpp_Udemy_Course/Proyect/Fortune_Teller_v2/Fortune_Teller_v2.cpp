#include <iostream>
#include <ctime>

using namespace std;


int main(){

    srand(time(0)); //Seed

    char predictions [][90]{
        "A lot of kids running in the backyard!",
        "A lot of empty beer bootles on your work table",
        "You partying too much with kids wearing weird clothes.",
        "You running away from something really scary",
        "Clouds gathering in the sky and an army standing ready for war",
        "Dogs running around in a deserted empty city",
        "A lot of cars stuck in a terrible traffic jam",
        "You sitting in the dark typing lots of lines of code on your dirty computer",
        "You yelling at your boss. And oh no! You get fired!",
        "You laughing your lungs out. I've never seen this before."
    };



    bool end{false};

    int max_length {15};
    char name [max_length] {};
    cout << "What's your name dear : ";
    cin.getline(name, max_length); //Get input with spaces

    while(!end){
        cout << "Oh dear " << name << ", I see ";
        
        size_t random = static_cast<size_t>((rand() % 11));

        cout << predictions[random] << endl;
        cout << "Do you want me to try again ? (Y | N)  : ";
        
        char go_on;
        cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y'))? false : true;
    }



    return 0;
}