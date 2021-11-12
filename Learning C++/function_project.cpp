#include <iostream>
using namespace std;

void introduceMe(string name) {
    cout << "Hello " << name << "!" << endl;
}

void main() {
    string name;
    cout << "Enter name: " << endl;
    cin >> name;
    introduceMe(name);
}

// 6:00:00 https://www.youtube.com/watch?v=GQp1zzTwrIg
