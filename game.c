#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    int number, guess;

    // Generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "🎯 Welcome to Number Guessing Game!\n";
    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        }
        else if (guess < number) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "🎉 Congratulations! You guessed the correct number!\n";
        }

    } while (guess != number);

    return 0;
}
