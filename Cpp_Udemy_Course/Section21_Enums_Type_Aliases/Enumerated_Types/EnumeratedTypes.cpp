#include <iostream>


enum class Month {
    Jan = 1, Feb, Mar, Apr,
    Mat, Jun, Jul, Aug = 18,
    Sep, Oct, Nov, Dec
};

enum class MonthC : unsigned char {
    Jan  = 0, January = Jan,
    Feb, February = Feb,
    Mar, March = Mar,
    Apr, April = Apr,
    May,
    Jun, June = Jun,
    Jul, July = Jul,
    Aug, Agust = Aug,
    Sep, September = Sep,
    Oct, October = Oct,
    Nov, November = Nov,
    Dec, December = Dec
};



int main(){

    Month month {Month::Dec};
    std::cout << "month : " << static_cast<int>(month) << std::endl;

    MonthC monthc {MonthC::Dec};
    std::cout << "month : " << static_cast<int>(monthc) << std::endl;

    return 0;
}