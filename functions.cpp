#include <iostream>

using namespace std;

void sayHiToUser(string name, int age);

// normal function
void sayHi() {
    cout << "Hi User\n" << endl;
}

double cube(double num) {
    return num * num* num;
}


int main() {
    cout << "First\n" << endl;
    sayHi();
    cout << "Second\n" << endl;

    sayHiToUser("Mike", 23);
    sayHiToUser("Bob", 39);
    sayHiToUser("Anastasia", 21);

    double result = cube(5.0);
    cout << "\n" << endl;
    cout << result << endl;

    return 0;
}

// function with arg
void sayHiToUser(string name, int age) {
    cout << "Hello " << name << "! Your are " << age << " years of age."<< endl;
}