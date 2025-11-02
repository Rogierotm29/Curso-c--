#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    string text = "this_is_a_small_example";
    string pat = "small_example";

    size_t size_text = text.size();
    size_t size_pat = pat.size();

    vector<size_t> pos;

    for(size_t i{0}; i <= size_text - size_pat; ++i){
        bool match = true;
        for(size_t j{0}; j < size_pat; ++j){
            if(text[i + j] != pat[j]){
                match = false;
                break;
            }
        }
        if(match){
            pos.push_back(i);
        }
    }

    size_t inicio = pos.size();

    cout << "Patron encontrado en en la posicion : ";
    for(size_t i {0}; i < inicio; ++i){
        cout << pos[i] << " " << pos[i] + size_pat - 1;
    }

    return 0;
}