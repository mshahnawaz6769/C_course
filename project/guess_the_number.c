#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;
    int guess_the_number = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("Guess the number (1 - 100): ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number.\n");

            // clear input buffer
            while (getchar() != '\n');
            continue;
        }

        guess_the_number++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        }

    } while (guess != number);

    printf("You've successfully guessed the number in %d attempts.\n", guess_the_number);

    return 0;
}
