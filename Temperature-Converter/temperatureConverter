#include <stdio.h>
#include <stdlib.h>

float FtoC(float input);
float CtoF(float input);

int main()
{
    int option;
    float tempInput;
    float tempOutput;

    printf("Do you want to convert from Celsius to Fahrenheit or Fahreinheit to Celsius?\n");
    while(1)
    {
        printf("Enter 1 for <Fahrenheit to Celsius> or 2 for <Celsius to Fahrenheit>: ");
        if(scanf("%d", &option) == 1 && (option == 1 || option == 2))
        {
            break;
        }
        else
        {
            printf("Invalid input. Please try again\n");
            while (getchar() != '\n');
        }
    }
    while(1)
    {
        printf("Enter the temperature: ");
        if(scanf("%f", &tempInput) == 1)
        {
            break;
        }
        else
        {
            printf("Invalid Temperature. Please try again.\n");
            while (getchar() != '\n');
        }
    }

    if(option == 1)
    {
        tempOutput = FtoC(tempInput);
        printf("%.2f degrees Fahrenheit is %.2f degrees Celsius.\n", tempInput, tempOutput);
    }
    else if(option == 2)
    {
        tempOutput = CtoF(tempInput);
        printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.\n", tempInput, tempOutput);
    }
    else
    {
        printf("Something went wrong. Please try again.");
        exit(1);
    }

    return 0;
}

float FtoC(float input)
{
    return 5.0 * (input - 32.0) / 9.0;
}

float CtoF(float input)
{
    return (input * 9.0 / 5.0) + 32.0;
}
