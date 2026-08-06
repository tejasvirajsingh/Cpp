#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Welcome To The Number Guessing Game!\n";
    cout << "I have picked a number between 1 to 100.\n";
    cout << "Try To Guess It!\n";

    do {
        cout << "Enter Your Guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too High! Try again.\n";
        } else if (guess < number) {
            cout << "Too Low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in "
                 << attempts << " attempts.\n";
        }
    } while (guess != number);

    return 0;
}
