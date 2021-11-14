#include <iostream>
using namespace std;

// Pointers and arrays

int main() {
//    int luckyNumbers[5] = {2, 3, 5, 6, 7};
//    cout << luckyNumbers << endl;
//    cout << &luckyNumbers << endl; // Ends up being address of first element
//    cout << &luckyNumbers[0] << endl;
//
//    cout << *(luckyNumbers+2) << endl; // * dereferences
//    cout << luckyNumbers[2] << endl;

    int luckyNumbers[5];
    for(int i = 0; i <=4; i++){
        cout << "Number: " << endl;
        cin >> luckyNumbers[i];
    }
    for(int i = 0; i <=4; i++){
        cout << "Number: " << endl;
        cout << *(luckyNumbers+i) << " " << endl;
    }


}