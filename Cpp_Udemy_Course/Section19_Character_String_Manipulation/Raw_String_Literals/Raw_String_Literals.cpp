#include <iostream>
#include <string>

int main(){
    

    std::string todo_list{R"(\tClaen the house\n\tWalk the dog\n\tDo Laundry\n\tPick groceries)"};
    std::string windows_path{R"( D:\\sandbox\\testProject\\hello.txt)"};
    std::string linux_path{R"( /home/username/files/hello.txt)"};
    std::string hint{R"("\\" escapes a backlash character like \.)"};

    std::cout << "todo_list : " << std::endl;
    std::cout << todo_list << std::endl;
    std::cout << "windows_path : " << windows_path << std::endl;
    std::cout << "linux_path : " << linux_path << std::endl;
    std::cout << "hint : " << hint << std::endl;
    

    //Using raw string literals
    std::string todo_list1 {R"(
    Clean the house
    Walk the dog
    Do laundry
    Pick groceries
    )"
    };

    //Can even use this in assignments 
    todo_list1 = R"(
    Clean the house
    Walk the dog
    Do laundry
    Pick groceries
    )";

    //This works for c-string literals
    const char* c_string_literal {R"(
    Clean the house
    Walk the dog
    Do laundry
    Pick groceries
    )"};
    

 
    //pROBLEM WHEN THE RAW STRING LITERAL CONTAINS (" OR ")
    std::cout << std::endl;
    std::cout << "Problematic)\"\'s : " << std::endl;
    std::string sentence { "The message was \"(Stay out of this!)\""}; //We want a raw string literal 
                                                                       //version of this
    std::cout << "sentence : " << sentence << std::endl;

    std::string sentence2 {R"---(The message was "(Stay out of this!)")---"};
    std::cout << "sentence1 : " << sentence2 << std::endl;
    return 0;
}