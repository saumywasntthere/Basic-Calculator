#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guessCount = 0;
    int num1;
    int num2;
    int lowerLimit;
    int higherLimit;
    int guess;

    printf("Enter the 2 (positive) numbers you want the random number to be between in (eg. 1 and 100).\n");
    printf("Do not enter the same number. Once you enter 2 different numbers, keep on guessing until you guess it right. \n");
    printf("You will be provided with hints. \n\n");
    do
    {
        while(1)
        {
            printf("First number: ");
            if(scanf("%d", &num1) == 1)
            {
                break;
            }
            else
            {
                printf("Please enter a number. \n");
                while (getchar() != '\n');
            }
        }
        while(1)
        {
            printf("Second number: ");
            if(scanf("%d", &num2) == 1)
            {
                break;
            }
            else
            {
                printf("Please enter a number. \n");
                while (getchar() != '\n');
            }
        }
            if(num1 == num2 || num1 < 0 || num2 < 0)
            {
            printf("Please enter different numbers.\n\n");
            }
    }
    while(num1 == num2 || num1 < 0 || num2 < 0);

    if(num1 < num2)
    {
        lowerLimit = num1;
        higherLimit = num2;
    }
    else
    {
        lowerLimit = num2;
        higherLimit = num1;
    }

    srand(time(NULL));
    secretNumber = rand() % (higherLimit - lowerLimit + 1) + lowerLimit;

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
                printf("Please enter a number.\n");
                while(getchar() != '\n');
            }
        }
        guessCount++;
        if(guess < secretNumber)
        {
            printf("Higher\n");
        }
        else if (guess > secretNumber)
        {
            printf("Lower\n");
        }
        else
        {
            printf("\nYou win!\n");
        }
    }
    while(guess != secretNumber);

    if(guessCount == 1)
    {
        printf("Amazing! You got it on your first guess.\n");
    }
    else
    {
        printf("You took %d guesses!\n", guessCount);
    }

    return 0;
}
