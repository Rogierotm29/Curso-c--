#include <iostream>



int main(){
    //Increment/ decrement pointer address manually

    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    int* p_score = {scores};

    //Forma no eexplicita de ir forward
    std::cout << "Values in scores array (p_score pointer increment) :" << std::endl;

    std::cout << "Address : " << p_score << " value : " << *(p_score) << std::endl;
    ++p_score; //Moves forward by sizeof(int) : 4 bytes

    std::cout << "Address : " << p_score << " value : " << *(p_score) << std::endl;
    ++p_score; //Move forward by sizeof(int) : 4 bytes

    std::cout << "Address : " << p_score << " value :" << *(p_score) << std::endl;
    ++p_score; //Move forward by sizeof(int) : 4 bytes

    std::cout << "Address : " << p_score << " value : " << *(p_score) << std::endl;
    ++p_score; //Move forward by sizeof(int) : 4 bytes

    std::cout << "Address : " << p_score << " value : " << *(p_score) << std::endl;
    ++p_score; //Move forward by sizeof(int) : 4 bytes
    
    std::cout << std::endl;
    std::cout << "Explicit addition of integer : " << std::endl;
    p_score = scores; //reset the pointer to the start of the array
    std::cout << "Scores[4] : " << *(p_score + 4) << std::endl; //Moves forward by 4 * sizeof(int)

    //Can usa loops to print these things out : easier
    p_score = scores;

    std::cout << std::endl;
    std::cout << "Pointer arithmetic on p_scores pointer and a for loop: " << std::endl;
    for(size_t i{0}; i < std::size(scores); ++i){
        std::cout << "Value : " << *(p_score + i) << std::endl;
    }



    return 0;
}