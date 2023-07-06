#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;
    int result;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter operator: " << endl;
    cin >> op;

    cout << "Enter second number: " << endl;
    cin >> num2;

    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else if(op == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid input" << endl;
    }

    cout << "result: " << result << endl;
    return 0;
}