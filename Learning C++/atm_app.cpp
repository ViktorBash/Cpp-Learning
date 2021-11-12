#include <iostream>
using namespace std;

void showMenu() {
    cout << "--MENU--" << endl;
    cout << "1: Check balance" << endl;
    cout << "2: Deposit" << endl;
    cout << "3: Withdraw" << endl;
    cout << "--" << endl;
}

int main(){
    int option;
    double balance = 500;
    double money_to_deposit = 0;
    double money_to_withdraw = 0;

    while (true) {
        showMenu();
        cout << "Option: ";
        cin >> option;

        switch(option) {
            case 1: cout << "Balance is $" << balance << endl; break;
            case 2:
                cout << "Enter $ to deposit: ";
                cin >> money_to_deposit;
                balance += money_to_deposit;
                break;
            case 3:
                cout << "Enter $ to withdraw: ";
                cin >> money_to_withdraw;
                if(balance >= money_to_withdraw)
                    balance -= money_to_withdraw;
                else
                    cout << "Not enough money, returning to menu" << endl;
                break;
        }
    }

}