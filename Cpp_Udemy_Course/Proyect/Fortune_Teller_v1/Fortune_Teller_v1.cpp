#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); //Seed

    char prediction0[] {"A lot of kinds running in the backyard!"};
    char prediction1[] {"A lot of empty beer bootles on tour work table."};
    char prediction2[] {"You partying too much with kids wearing weird clothes."};
    char prediction3[] {"Clouds gathering in the sky and an army standing ready for war."};
    char prediction4[] {"Dogs running around in a deserted empty city."};
    char prediction5[] {"A lot of cars stuck in a terrible traffic jam."};
    char prediction6[] {"You sitting in the dark typing lots of lines of code on your dirty computer"};
    char prediction7[] {"You yelling at your boss. And oh no! You get fired!"};
    char prediction8[] {"You running away from something really scary."};
    char prediction9[] {"You laughing your lungs out. I've never seen this before."};


    bool end{false};

    int max_length {15};
    char name [max_length] {};
    cout << "What's your name dear : ";
    cin.getline(name, max_length); //Get input with spaces

    while(!end){
        cout << "Oh dear " << name << ", I see ";
        
        size_t rand_num = static_cast<size_t>((rand() % 11));
        switch (rand_num)
        {
        case 0:
            cout << prediction0 << endl;
            break;
        case 1:
            cout << prediction1 << endl;
            break;
        case 2:
            cout << prediction2 << endl;
            break;

        case 3:
            cout << prediction3 << endl;
            break;

        case 4:
            cout << prediction4 << endl;
            break;

        case 5:
            cout << prediction5 << endl;
            break;

        case 6:
            cout << prediction6 << endl;
            break;

        case 7:
            cout << prediction7 << endl;
            break;


        case 8:
            cout << prediction8 << endl;
            break;
        
        case 9:
            cout << prediction9 << endl;
            break;

        default:
            cout <<", huum, I don't see anything" << endl;
            break;
        }
        cout << "Do you want me to try again ? (Y | N)  : ";
        
        char go_on;
        cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y'))? false : true;
    }



    return 0;
}