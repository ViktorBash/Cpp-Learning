#include <iostream>
using namespace std;

// 2D array

int main() {
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    int ** table=new int*[rows];
    for(int i = 0; i < rows; i ++){
        table[i] = new int[cols];
    }
    table[1][2] = 88;

    // Deallocation works in reverse/opposite way
    for(int i = 0; i < rows; i++){
        delete[] table[i];
    }
    delete[] table;
    table = NULL;


    // https://www.youtube.com/watch?v=GQp1zzTwrIg 9:55:00

    return 0;
}