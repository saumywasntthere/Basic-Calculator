#include <stdio.h>
#include <stdlib.h>

float add(float i, float j);
float subtract(float i, float j);
float multiply(float i, float j);
float divide(float i, float j);

int main()
{
    char function;
    float num1;
    float num2;
    float result;

    while(1)
    {
        printf("Enter the first number: ");
        if(scanf("%f", &num1) == 1)
        {
            break;
        }
        else
        {
            printf("This is not a number. Please enter a number.\n");
            while(getchar() != '\n');
        }
    }

    getchar();

    while(1)
    {
        printf("Choose a function (+, -, *, /): ");
        if(scanf("%c", &function) == 1 && (function == '+' || function == '-' || function == '*' || function == '/'))
        {
            break;
        }
        else
        {
            printf("Invalid function. Please choose +, -, * or /.\n");
            while(getchar() != '\n');
        }
    }

    if(function == '/')
    {
        do
        {
            while(1)
            {
                printf("Enter the second number (not 0): ");
                if(scanf("%f", &num2) == 1 && num2 != 0)
                {
                    break;
                }
                else
                {
                    printf("This is not an accepted value. Please enter a number greater than 0.\n");
                    while(getchar() != '\n');
                }
            }
        }
        while (num2 == 0);
    }
    else
    {
        printf("Enter the second number: ");
        while(scanf("%f", &num2) != 1)
        {
            printf("Invalid input. \nPlease enter a valid number: ");
            while(getchar() != '\n');
        }
    }

    printf("%f %c %f = ", num1, function, num2);

    if(function == '+')
    {
        result = add(num1, num2);
    }
    else if(function == '-')
    {
        result = subtract(num1, num2);
    }
    else if(function == '*')
    {
        result = multiply(num1, num2);
    }
    else if(function == '/')
    {
        result = divide(num1, num2);
    }

    printf("%f\n", result);
    return 0;
}

float add(float i, float j)
{
    return i + j;
}

float subtract(float i, float j)
{
    return i - j;
}

float multiply(float i, float j)
{
    return i * j;
}

float divide(float i, float j)
{
    return i / j;
}
