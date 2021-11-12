#include <iostream>
using namespace std;

int main() {
    // Operators
    cout << 5 / 2 << endl; // Type int
    cout << 5.0 / 2 << endl; // Type double

    cout << 5 % 2 << endl;

    int counter = 7;
    counter++;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << counter2++ << endl; // writes out 7 (post increment)

    int counter3 = 7;
    cout << ++counter3 << endl; // writes out 8 (pre increment)

    system("cls"); // clear console

    int a = 5, b = 5;
    cout << (a > b) << endl; // prints "0" --> False
    cout << (a >= b) << endl; // prints 1

    cout << (a == 5 && b == 5) << endl; // prints 1
    cout << (a == 5 || b != 5) << endl; // prints 1

    int x = 5;
    x+= 7; // same as x = x + 7;
    cout << x << endl;

    // Swapping two variables
    cout << "Swapping vars" << endl;
    int a1 = 20;
    int b1 = 10;

    int temp = a1;
    a1 = b1;
    b1 = temp;

    cout << a1 << endl;
    cout << b1 << endl;

    // Better way to swap to variables
    int a2 = 20;
    int b2 = 10;
    a2 = a2 + b2; // a now = 30
    b2 = a2 - b2; // b now 20
    a2 = a2 -b2; // a now 10

    cout << a2 << endl;
    cout << b2 << endl;

    // Ternary operator


    // 3:01:00 https://www.youtube.com/watch?v=GQp1zzTwrIg

}