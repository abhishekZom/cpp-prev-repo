#include <iostream>

using namespace std;

int main() {

    //vars
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    //pointers
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "age: " << age << " @ " << pAge << endl;
    cout << "gpa: " << gpa << " @ " << pGpa << endl;
    cout << "name: " << name << " @ " << pName << endl;
    
    return 0;
}