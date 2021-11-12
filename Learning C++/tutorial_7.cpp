#include <iostream>
using namespace std;


void function(); // Declaring function on top, so that we can put it below main() and file still works

bool isPrimeNumber(int number) {
    for(int i = 2; i < number; i++){
        if(number % i == 0)
            return false; // Can just return false right away
    }
    return true;
}

int main()
{
    function();


    int number;
    cout << "Number: ";
    cin >> number;

    bool is_Prime = isPrimeNumber(number);

    if(is_Prime)
        cout << "Number is prime" << endl;
    else
        cout << "Number is not prime" << endl;

    for(int i = 1; i < 1000; i++){
        if(isPrimeNumber(i))
            cout << i << endl;
//        cout << "I: " << i << ", Prime? " << isPrimeNumber(i) << endl;

    }

}

void function(){
    cout << "Hello from func" << endl;
}

// 6:00:00 https://www.youtube.com/watch?v=GQp1zzTwrIg
