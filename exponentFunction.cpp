#include <iostream>

using namespace std;

int pow(int baseNum, int powNum) {
    int result = 1;
    for(int i; i< powNum; i++) {
        result *= baseNum;
    }

    return result;
}

int main() {
    cout << pow(5,3) << endl;
    return 0;
}