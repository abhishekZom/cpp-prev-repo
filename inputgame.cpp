#include <iostream>

using namespace std;

int main() {
    string color, pluralNoun, celebrity;

    cout << "enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a celebrity: ";
    getline(cin, celebrity);
    cout << "\n\n" << endl;
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}