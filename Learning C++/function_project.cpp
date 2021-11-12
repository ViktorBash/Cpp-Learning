#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age=0) {
    cout << "Hello " << name << "!" << endl;
    cout << "I am from " << city << endl;
    if (age!=0)
        cout << "I am " << age << " years old" << endl;
}

int main() {
    string name;
    string city;
    int age;
    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter city: " << endl;
    cin >> city;
    cout << "Enter age: " << endl;
    cin >> age;
    introduceMe(name, city, age);
}

