#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    srand((unsigned int) time(NULL));

    int numberToGuess = std::rand() % 100 + 1;
    int playerGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I've picked a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the player guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;
        numberOfTries++;

        if (playerGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (playerGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " 
                      << numberToGuess << " in " 
                      << numberOfTries << " tries!" << std::endl;
        }
    } while (playerGuess != numberToGuess);

    return 0;
}
