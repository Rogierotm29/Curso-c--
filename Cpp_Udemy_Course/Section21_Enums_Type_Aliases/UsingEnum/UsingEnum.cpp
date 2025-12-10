#include <iostream>
#include <string_view>

enum class Month {
    Jan, Feb, Mar, Apr,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

constexpr std::string_view month_to_string(Month month) noexcept {
    switch (month) {
        case Month::Jan: return "January";
        case Month::Feb: return "February";
        case Month::Mar: return "March";
        case Month::Apr: return "April";
        case Month::May: return "May";
        case Month::Jun: return "June";
        case Month::Jul: return "July";
        case Month::Aug: return "August";
        case Month::Sep: return "September";
        case Month::Oct: return "October";
        case Month::Nov: return "November";
        case Month::Dec: return "December";
    }
    return "None"; // por seguridad (inaccesible en uso normal)
}

int main() {
    std::cout << month_to_string(Month::Jan) << '\n';
    std::cout << month_to_string(Month::May) << '\n';
    std::cout << month_to_string(Month::Dec) << '\n';
    return 0;
}
