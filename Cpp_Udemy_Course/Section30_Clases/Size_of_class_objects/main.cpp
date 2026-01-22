#include <iostream>

class Wrapper{
public:
    void do_something(){

    }
    void print_info(){
        std::cout << "var1 : " << m_var1 << std::endl;
        std::cout << "var2 : " << m_var2 << std::endl;
        std::cout << "name : " << m_name << std::endl;
    }
private:
    int m_var1{};
    int m_var2{};
    std::string m_name{"Lorem ipsum dolor sit amet..."};
};

int main(){

    Wrapper hola;
    std::cout << sizeof(hola);


    return 0;
}