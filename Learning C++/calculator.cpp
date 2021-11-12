#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;
    cout << "Calculator" << endl;
    cin>>num1>>operation>>num2;

    // Must put break statement after so that C++ knows when case statement ends
    switch (operation) {
        case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
        case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
        case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
        case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
        case '%':
            bool isNum1Int, isNum2Int;
            isNum1Int = false;
            isNum2Int = false;
            if ((int)num1 == num1){
                isNum1Int = true;
            }
            if ((int)num2 == num2){
                isNum2Int = true;
            }
            if (isNum2Int && isNum1Int){
                cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
            }
            else {
                cout << "Wrong input";
            }
            break;
        default:cout << "Not valid" << endl;

    }
}