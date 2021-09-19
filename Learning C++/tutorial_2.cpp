#include <iostream>
using namespace std;

int main() {
    cout << (int)'a' << endl; // Casting operator, going from char to int. The int is the ASCII equivalent
    cout << int('a') << endl; // Same thing
    cout << int('A') << endl; // Different number

    cout << char(65) << endl; // Turns integer into ASCII equivalent character

    char c1, c2, c3, c4, c5; // Declaring multiple variables of same type on 1 line
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5; // Here we are getting the input character by character, instead of a string
    cout << "ASCII Message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);


}