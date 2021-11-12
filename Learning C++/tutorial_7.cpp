#include <iostream>
using namespace std;


void function(); // Declaring function on top, so that we can put it below main() and file still works

void main()
{
    function();
}

void function(){
    cout << "Hello from func" << endl;
}

// 6:00:00 https://www.youtube.com/watch?v=GQp1zzTwrIg
