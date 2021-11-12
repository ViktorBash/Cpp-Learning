#include <iostream>
using namespace std;
// What are generics?
// Using same code for different data types
// THis is done using templates


template<typename T>
// Can also do: template<class Type>



// int& or T& means we are passing in a variable by reference
// Swap function is now a generic function (can be used with different datatypes)
void Swap(T& a, T& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5;
    int b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    Swap(a, b);
    Swap(a, b);
    cout << a << " - " << b << endl;

    char c='c', d='d';
    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;

    return 0;
}