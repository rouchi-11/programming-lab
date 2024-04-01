#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int getTotalDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

int main() {
    int month, year;

    
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

   
    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 1;
    }

   
    cout << "Total number of days in month " << month << " of year " << year << " is: ";
    cout << getTotalDaysInMonth(month, year) << endl;

    return 0;
}
