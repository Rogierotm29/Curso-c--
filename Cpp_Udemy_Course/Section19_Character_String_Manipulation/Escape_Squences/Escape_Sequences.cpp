#include <iostream>
#include <string>

int main() {

    std::string todo_list{ "\tClaen the house\n\tWalk the dog\n\tDo Laundry\n\tPick groceries"};
    std::string windows_path{" D:\\sandbox\\testProject\\hello.txt"};
    std::string linux_path{" /home/username/files/hello.txt"};
    std::string hint{" \"\\\\\" escapes a backlash character like \\."};

    std::cout << "Hello";
    std::cout << "World" << std::endl;
    //He said "Get out of here immediately"
    std::cout << "He said \" Get out of here immediatly!\"" << std::endl;


    return 0;
}