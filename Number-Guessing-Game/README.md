# Number Guessing Game

This is a simple yet engaging number-guessing game. The program allows users to input two different positive numbers, and it generates a random secret number within that range. The user then keeps guessing the number until they get it right, with the program providing hints on whether the guessed number is higher or lower than the secret number. 

Key Features:

Customizable Range: The user can input any two positive numbers as the range for the random number. The program ensures that the two numbers are different and non-negative.

Input Validation: Ensures that users provide valid inputs for both the range and the guesses, preventing the program from crashing due to incorrect inputs.

Random Number Generation: The program uses the rand() function from the stdlib.h library, seeded with time() to ensure a truly random secret number is generated within the specified range.

Hint System: Provides feedback with hints such as "Higher" or "Lower" after each guess, helping the user narrow down their guesses.

Guess Counter: The program keeps track of how many guesses the player made and congratulates the player accordingly based on their performance.

Interactive and User-Friendly: Input prompts are clear, and the game loops until the player guesses the correct number, making it user-friendly and fun.
