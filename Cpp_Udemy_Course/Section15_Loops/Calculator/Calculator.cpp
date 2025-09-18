#include <iostream>
using namespace std;


int main(){

	char operation; // +,-,*,/
    double operand1;
    double operand2;
    bool end {false};
    
    std::cout << "Welcome to Awesome Calculator"<< std::endl;
    
    while((end == false)){
		//Do some processing
        cout << "--------------------------------------------" << endl;
        cout << "What operation do you want help with? " << endl;
        cout << "+,-,* and / are supported. Please choose one and type below"<< endl;
        cout << "Your operation : ";
        cin >> operation;

        if( (operation != '+') &&  
            (operation != '-') &&
            (operation != '*') &&
            (operation != '/')){
                std::cout << "operation " << operation << " NOT SUPPORTED!" << endl;
                continue;

            }
        
        cout << endl;
        cout << "Please type in your two operands separated by a space and hit enter: ";
        cin >> operand1 >> operand2;
        cout <<std::endl;
        
		switch(operation){
        case '+' : 
            std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << endl;
            break;
        case '-' : 
            std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << endl;
            break;
        case '*' : 
            std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << endl;
            break;
        case '/' : 
            std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << endl;
            break;
        default :
            std::cout << operation << " operation not supported" << endl;
            break;
		}
	
		
        std::cout << "Continue ? ( Y | N) : ";
        
        char go_on;
        cin >> go_on;
        
        //end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
        
        //You could also write the previous statement using if else
        if((go_on == 'Y') || (go_on == 'y')){
            end = false;
        }else{
            end = true;
        }
    }
    
    cout << "Done helping out. BYE!" << endl;

    return 0;
}