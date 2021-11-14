#include <iostream>
using namespace std;

// Pointer --> Stores address (memory location)

int main() {
    int n = 5;
    cout << &n << endl;
    // &n means the address of the variable n

    int * ptr = &n; // Creating a pointer with *
    cout << ptr << endl; // See the address
    cout << *ptr << endl; // See what is at the address
    *ptr = 10; // Change variable at the address
    cout << n << endl; // n is now 10
    // Important: Pointer must be of same type of variable

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << v << endl;

    return 0;

    // You can use pointers for:
    // Pass in by reference to function
    // Return multiple values from a function
    // Use w/ arrays
    // Use for dynamic memory allocation
    // Use w/ OOP
    // Smart pointers

}