#include <iostream>
using namespace std;

int main() {
    int year, month;
    cout << "Year, month: ";
    cin >> year >> month;

    switch (month) {
        case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days" << endl : cout << "28 days" << endl; break;
        case 4:
        case 6:
        case 9:
        case 11: cout << "30 days" << endl; break; // All of these cases have the same execution
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout << "31 days" << endl; break;
        default: cout << "Not valid" << endl;
    }

}