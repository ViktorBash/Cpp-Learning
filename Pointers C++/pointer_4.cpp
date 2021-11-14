#include <iostream>
using namespace std;

// Using pointers to return multiple values from a function

int getMin(int numbers[], int size){
    int min = numbers[0];
    for(int i=1; i < size; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }

    }
    return min;
}

int getMax(int numbers[], int size){
    int max = numbers[0];
    for(int i=1; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }

    }
    return max;
}

// We are passing in by reference (int*min, int*max) and changing these two variables
void getMinAndMax(int numbers[], int size, int*min, int*max){
    for(int i=1; i < size; i++){
        if(numbers[i] > *max){
            *max = numbers[i];
        }
        if(numbers[i] < *min){
            *min = numbers[i];
        }
    }
}

int main() {
    int numbers[5] = {5, 4, -2, 29, 6};
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max); // Passing in address
    cout << "Max is " << max << endl;
    cout << "Min is " << min << endl;

    cout << "Min is " << getMin(numbers, 5) << endl;
    cout << "Max is " << getMax(numbers, 5) << endl;
    return 0;
}