#include <iostream>
using namespace std;

// Recursion
int findSum(int cur_num, int max_num){
    if (cur_num == max_num)
        return max_num;
    return findSum(cur_num + 1, max_num) + cur_num;
}

// Sum numbers between m-n
int main() {
    int cur_num = 2;
    int max_num = 5;
    cout << findSum(cur_num, max_num) << endl;
}

