#include <iostream>
using namespace std;

// Dynamic arrays --> can allocate and deallocate dynamic memory
// Fixed arrays: data is in order (continuous memory)
// Linked List: not stored in continuous memory, slow to traverse

int main() {
    int size;
    cout << "Size: ";
    cin >> size;
    int * myArray = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Array: " << i << ":";
        cin >> myArray[i];
    }

    // Must deallocate memory you allocated previously when you don't need it anymore
    delete[]myArray;
    myArray = NULL;

    return 0;
}