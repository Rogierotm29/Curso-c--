#include <iostream>
#include <iomanip>

using namespace std;

bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    unsigned int first_day;
    const char* months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    const char* days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Enter a year: ";
    cin >> year;
    cout << "Enter the first day of the year [1: Monday, ... 7:Sunday]: ";
    cin >> first_day;

    // Ajustar febrero si es bisiesto
    if (is_leap(year)) {
        days_in_month[1] = 29;
    }

    cout << "\nCalendar for " << year << endl;

    for (int m = 0; m < 12; ++m) {
        cout << "\n--" << months[m] << " " << year << "--\n";
        for (const char* day : days) {
            cout << setw(4) << day;
        }
        cout << endl;

        // Espacios antes del primer día
        int current_day = first_day;
        for (int s = 1; s < current_day; ++s) {
            cout << setw(4) << " ";
        }

        // Imprimir días del mes
        for (int d = 1; d <= days_in_month[m]; ++d) {
            cout << setw(4) << d;
            if (current_day == 7) {
                cout << endl;
                current_day = 1;
            } else {
                ++current_day;
            }
        }
        cout << endl;

        // El primer día del siguiente mes
        first_day = current_day;
    }
    return 0;
}