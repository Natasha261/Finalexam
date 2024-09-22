#include <iostream>
using namespace std;

bool is_leap_year(int R) {
    //THE YEAR IS A CENTURY YEAR
    // If the year is divisible by 400, it's a leap year
    if (R % 400 == 0)
        return true;
    // If the year is divisible by 100 (but not 400), it's not a leap year
    else if (R % 100 == 0)
        return false;

    //THE YEAR IS NOT A CENTURY YEAR
    // If the year is divisible by 4, it's a leap year (except century years)
    else if (R % 4 == 0)
        return true;
    // Otherwise, it's not a leap year
    else
        return false;
}

int main() {
    int year;
    cout << "   Enter a year of your choice: ";
    cin >> year;

    if (is_leap_year(year))
        cout << year << " is a leap year. " << endl;
    else
        cout << year << " is not a leap year. " << endl;
    return 0;
}