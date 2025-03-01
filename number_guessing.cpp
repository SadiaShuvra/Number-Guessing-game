#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    stack<int> guessHistory;
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n";
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < 1 || guess > 100) {
            cout << "Invalid guess! Please guess between 1 and 100.\n";
            continue;
        }
        attempts++;
        guessHistory.push(guess);
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }
    }
    cout << "\nYour guesses history: ";
    while (!guessHistory.empty()) {
        cout << guessHistory.top() << " ";
        guessHistory.pop();
    }
    cout << endl;

    return 0;
}

