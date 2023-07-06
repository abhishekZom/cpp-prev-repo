#include <iostream>

using namespace std;

int main() {
    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall) {
        cout << "You are a tall male" << endl;
    } else if(isMale && !isTall) {
        cout << "You are a short male" << endl;
    } else if(!isMale && isTall) {
        cout << "You are a tall but not a male" << endl;
    } else {
        cout << "You are not male and not tall" << endl;
    }
}