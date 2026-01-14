#include <iostream>


int main(){

    /*
    Lambda function signature :
                            [capture list] (parameters) -> return type{
                                    //function body
                                    }
    */


    //Se la damos a una variable para llamar la lambda function varias veces
    auto func = [](){
        std::cout << "Hello world!" << std::endl;
    };
    func();
    func();
  

   

    // llamamos directamente la funcion pero solo se puede llamar una vez
    [](){
        std::cout << "Hello world!" << std::endl;
        }();
   

    //Lambda function con parametros
    [](double a, double b){
        std::cout << " a + b : " << a + b << std::endl;

    }(1.24, 12.54);

    //lambda function con return y se puede llamar varias veces

    auto result = [](double a, double b){
        return a + b;
    }(12.43,54.76);

    std::cout << result;

    //Se puede hacer asi o sin return type
    auto func1 = [](double a, double b) -> int{
        return a + b;
    };

    auto result1 = func1(10.23,43.564);
    auto result2 = func1(342.43, 54.43);
    return 0;


}