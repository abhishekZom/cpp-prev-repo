#include <iostream>

using namespace std;

int main() {
    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNumber != guess && outOfGuesses == false) {
        if(guessCount < guessLimit) {
            cout << "Enter a guess" << endl;
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
        
    }

    if(outOfGuesses) {
        cout << "You Lose!" << endl;
    } else {
        cout << "You Win!" << endl;
    }
    return 0;
}