#include <iostream>



int main(){

    using HugeInt = unsigned long long int;

    HugeInt huge_num {18'446'744'073'709'551ull};

    std::cout << "huge_num : " << huge_num << std::endl;

    HugeInt other_huge_num {18'112'334'073'709'752ull};

    std::cout << "other_huge_num : " << other_huge_num << std::endl;

}