#include <iostream>
using namespace std;

// Function overloading (multiple functions with same names, but different inputs)

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main(){
    cout << sum(4, 3) << endl;
    cout << sum(4.2, 2.2) << endl;
    cout << sum(4.2, 42.0, 234.4) << endl;

    cout << "hi" << endl;
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

float sum(float a, float b, float c){
    return a + b + c;
}