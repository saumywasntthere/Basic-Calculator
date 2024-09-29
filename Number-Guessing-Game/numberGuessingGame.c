#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2, lowerLimit, higherLimit, secretNumber;
    int guess;
    int guessCount = 0;

    printf("This is a guessing game. \nYou have to enter 2 numbers, and i will select a random number between them.\nYou have to guess that number.\n");
    printf("After each guess I will tell you if the secret number is higher than your guess or lower than your guess.\nBecause I know otherwise you would never be able to guess it right.\nhahaha\n\n");
    while(1)
    {
        printf("Enter first number (a postive number): ");
        if(scanf("%d", &num1) == 1 && num1 > 0)
        {
            break;
        }
        else
        {
            printf("Enter a valid input (positive number).\n");
            while (getchar() != '\n');
        }
    }
    while(1)
    {
        printf("Enter second number (a postive number): ");
        if(scanf("%d", &num2) == 1 && (num2 > 0) && (num1 != num2) )
        {
            break;
        }
        else
        {
            printf("Enter a valid input (positive number) that is not equal to the first number.\n");
            while (getchar() != '\n');
        }
    }

    if(num1 > num2)
    {
        lowerLimit = num2;
        higherLimit = num1;
    }
    else if(num2 > num1)
    {
        lowerLimit = num1;
        higherLimit = num2;
    }

    srand(time(NULL));

    secretNumber = (rand() % (higherLimit - lowerLimit + 1)) + lowerLimit;

    do
    {
        while(1)
        {
            printf("Guess the number: ");
            if(scanf("%d", &guess) == 1)
            {
                break;
            }
            else
            {
                printf("Enter a number.");
                while (getchar() != '\n');
            }
        }
        if(secretNumber > guess)
        {
            printf("Higher\n");
        }
        else if(secretNumber < guess)
        {
            printf("Lower\n");
        }
        guessCount++;
    }
    while(guess != secretNumber);

    if(secretNumber == guess)
    {
        if(guessCount == 1)
        {
            printf("Congratulations! You Guessed Right! It was %d!\n", secretNumber);
            printf("You only took 1 guess!");
        }
        else
        {
            printf("Congratulations! You Guessed Right! It was %d!\n", secretNumber);
            printf("You took %d guesses.", guessCount);
        }
    }
}
