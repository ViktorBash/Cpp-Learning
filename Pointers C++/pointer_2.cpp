#include <iostream>
using namespace std;

// Pointer --> Stores address (memory location)
// Void pointer: can hold address of any data type, cannot directly dereference a void pointer though

// Be careful with void pointers (a lot of bugs can be mistakenly introduced)

// Print out value stored at pointer
void printNumber(int* numberPtr){
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr){
    cout << *charPtr << endl;
}

void print(void* ptr, char type){
    switch (type) {
        case 'i': cout << *((int*)ptr) << endl; break; // handle int*
        case 'c':cout << *((char*)ptr) << endl; break;// handle char*
    }
}

int main() {
    int number = 5;
    char letter = 'a';
//    printNumber(&number);
//    printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}