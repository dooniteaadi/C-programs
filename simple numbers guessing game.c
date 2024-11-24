#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));  // Seed the random number generator with the current time
    
    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    // Loop until the player guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);  // Take input from the player
        attempts++;  // Increment the attempt counter

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the correct number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);  // Continue until the guess is correct

    return 0;
}
