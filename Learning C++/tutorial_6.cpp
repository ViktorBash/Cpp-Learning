#include <iostream>
using namespace std;

void main() {
    // Do while loop
    int usersPin = 1234, pinEntered, errorCounter = 0;
    do{
        cout << "PIN: ";
        cin >> pinEntered;
        if (usersPin != pinEntered){
            errorCounter++;
        }
    }
    while (errorCounter < 3 && usersPin != pinEntered);

    (errorCounter < 3) ? cout << "Good job" << endl : cout << "Bad job" << endl;

    // The factorial of a number
    int factorial = 8;
    int result = 1;

    for (int i = 1; i <= factorial; i++){
        result *= i;
    }
    cout << result << endl;

    // Nested loops
    int grade;
    for(int i = 0; i < 3; i++){
        do {
            cout << "Enter grade" << i + 1 << ": ";
            cin >> grade;
        }
        while (grade < 1 || grade > 5);
    }


}