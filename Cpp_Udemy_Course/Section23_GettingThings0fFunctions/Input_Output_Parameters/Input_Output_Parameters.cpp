#include <iostream>
#include <string>

void max_str(const std::string& input1, const std::string input2, std::string& output){
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}


void max_int(int input1, int input2, int& output){
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}


void max_double(double input1, double input2, double* output){
    if(input1 > input2){
        *output = input1;
    }else{
        *output = input2;
    }
}


int main(int argc, char* argv[]){

    std::string out_str;
    std::string string1("Alabama");
    std::string string2("Bellevue");
    max_str(string1, string2, out_str);
    std::cout << "max_str : " << out_str << std::endl;

    return 0;
    
}