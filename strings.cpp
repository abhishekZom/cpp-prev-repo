#include <iostream>

using namespace std;

int main() {
    string phrase = "Abhishek Kumar";
    cout << "Giraffe Academy" << endl;
    cout << "Hello" << endl;
    cout << "Hello, \n Giraffe Academy" << endl;

    cout << phrase << endl;

    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase[2] << endl;

    // info about string
    cout << phrase.find("Kumar", 0) << endl;
    cout << phrase.substr(8, 5) << endl;

    string phraseSub = phrase.substr(8, 5);
    cout << phraseSub << endl;

}