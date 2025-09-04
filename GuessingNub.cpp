#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number , guess, attempts = 0;


    srand(time(0));
    number =rand() % 100 +1;

    cout << "Welcome To The Number Guessing Game!\n";
    cout << "I have Picked a number between 1 to  100.\n";
    cout << "Try To Guess It!\n";

    do {
        cout << "Enter Your Guess: ";
        cin >> guess;
        attempts++;

        if (guess > number){
        cout << "Too HIgh! TRy again.\n";
        } else if (guess < number) {
            cout << "Too low! Try Again.\n";

        }
        else {
            cout << "Congratulations! YOu Guessed The Number in";
            << attempts << " Attempts.\n";
        }
    
    }
     while (guess != number);

     return 0;
}