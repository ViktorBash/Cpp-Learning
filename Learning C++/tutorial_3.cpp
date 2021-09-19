#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter whole number:";
    cin >> number;
    if (number % 2 == 0){
        cout << "Number is even" << endl;
    }
    else {
        cout << "Number is odd" << endl;
    }

    // Triangle program
    float a, b, c;
    cout << "a, b, c:";
    cin >> a >> b >> c;
    if (a == b && b == c){
        cout << "Equilateral";
    }
    else if (a != b && b != c && a != c){
        cout << "Scalene" << endl;
    }
    else {
        cout << "Isosceles" << endl;
    }


}