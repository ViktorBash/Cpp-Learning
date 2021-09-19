#include <iostream> // Header file, input output stream, importing the library
using namespace std; // References std on a global level

int main() { // Whenever file is run, main() executes
    // std::cout << "Hello World, this is test.cpp!\n"; // std = namespace,
    std::cout << "My name is Bob" << std::endl;  // endl ends the line (go to next line)
    cout << "Today is ____\n\n" << endl;  // possible because of line 2 (using namespace std)

    // system("pause>0"); // freeze the system

    //  float annualSalary = 50000.99;
    //  float monthlySalary = annualSalary / 12;
    //  cout << "Your monthly salary is " << monthlySalary << endl;
    //  cout << "test" << endl;

    // Input and output
    float annualSalary;
    cout << "Enter yearly salary:";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << annualSalary * 10 << endl;

    char _character='a';  // single quotes ' ' for char data type
    // Underscore is only special character you can use in variable names
    // Use camelCasing for C++

    // Data types
    float firstSecondThird = 5.5; // Holds 4 bytes
    int yearOfBirth = 1995;  // 4 bytes
    char gender = 'f';  // 1 byte
    bool isOlderThan18 = false; // 1 byte
    double myDoubleData = 5.5; // Holds 8 bytes (double of float)
    unsigned int myUnsignedInt; // 8 bytes

    // sizeof() tells you how many bytes something holds, 1 byte = 8 bits
    // example of 1 bit: 00000000 --> 0
    cout << "Size of int is " << sizeof(int) << "bytes\n";
    cout << "Int min value is " << INT_MIN << endl; // 2^31
    cout << "Int max value is " << INT_MAX << endl;  // 2^31 - 1
    cout << "Size of unsized int is " << sizeof(unsigned int) << "bytes" << endl;
    cout << "Uint max value is " << UINT_MAX << endl; // double the size, because unsigned is only positive

    // Data type overflow
    int intMax = INT_MAX;
    cout << intMax << endl; // 2147483647
    cout << intMax + 1 << endl; // -2147483648


}
