# Temperature Conversion Program

This project is a command-line temperature conversion tool that allows users to convert between Fahrenheit and Celsius. The program prompts the user to choose the desired conversion direction and then performs the conversion after validating the input.

Key Features:
Conversion Options: The program supports two conversion modes: 
  1. Fahrenheit to Celsius
  
  2. Celsius to Fahrenheit

User Input Validation: Ensures that valid numerical inputs are provided for the temperature and correct selection of conversion options. Invalid entries prompt the user to retry until valid input is provided.

Precision: Outputs the converted temperature with two decimal places, ensuring accuracy.

Modular Design: The conversion logic is separated into two functions—`FtoC()` and `CtoF()`—that handle the respective conversions, following good programming practices.

Error Handling: The program prevents invalid conversions and handles invalid user inputs gracefully by reprompting the user.
