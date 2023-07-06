#include <iostream>

using namespace std;

int main() {
    //accessing and modifying arrays
    int luckyNums[5] = {4, 8, 15, 23, 42};
    cout << luckyNums[2] << endl;
    luckyNums[2] = 2823;
    cout << luckyNums[2] << endl;

    //warning of going out of bounds in a fix sized array
    luckyNums[5] = 92;
    cout << luckyNums << endl;
}