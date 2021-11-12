#include <iostream>
using namespace std;

int main(){
    // Write out all num between 100-500 that are divisible by 3 and 5
    int counter = 100;
    while (counter <= 500){
        if(counter % 3 == 0 && counter % 5 == 0){
            cout << counter << " divisible by 3 and 5" << endl;
        }
        else if (counter % 3 == 0){
            cout << counter << " divisible by 3" << endl;
        }
        else if (counter % 5 == 0){
            cout << counter << " divisible by 5" << endl;
        }
        counter++;
    }

    // Count digits of a number
    int number;
    cout << "Number: " << endl;
    cin >> number;
    number = abs(number);

    if(number == 0){
        cout << "1" << endl;
    }
    else {
        int counter2 = 1;
        while (number >= 10){
            counter2++;
            number /= 10;
        }
        cout << counter2 << endl;
    }

    // Reverse digits of a number
    int number1, reverseNum1 = 0;
    cout << "Number: ";
    cin >> number1;
    while (number1 > 0){
        reverseNum1 *= 10;
        reverseNum1 += (number1 % 10);
        number1 /= 10;
    }
    cout << reverseNum1 << endl;

}