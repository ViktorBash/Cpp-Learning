#include <iostream>
using namespace std;

int main() {
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls"); // Clear console so next user doesn't see the number
    cout << "Guest: ";
    cin >> guestUserNum;

    // Old if-else statement
//    if(hostUserNum == guestUserNum){
//        cout << "Correct!";
//    }
//    else{
//        cout << "Failed";
//    }

    // Ternary operator. condition ? success : error
    (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";

    // 3:01:00 https://www.youtube.com/watch?v=GQp1zzTwrIg


}