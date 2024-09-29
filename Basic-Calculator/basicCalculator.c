#include <stdio.h>

int add(int input1, int input2);
int subtract(int input1, int input2);
int multiply(int input1, int input2);
int divide(int input1, int input2);

int main()
{
    int num1, num2;
    char function;
    int answer;

    while(1)
    {
        printf("Enter first number: ");
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
        printf("Enter the function (+, -, *, /): ");
        if(scanf(" %c", &function) == 1 && (function == '+' || function == '-' || function == '*' || function == '/') )
        {
            break;
        }
        else
        {
            printf("This is not a suitable function. Please enter either +, -, * or /. \n");
            while (getchar() != '\n');
        }
    }
    if(function == '/')
    {
        while(1)
        {
            printf("Enter second number (not 0): ");
            if(scanf("%d", &num2) == 1 && num2 != 0)
            {
                break;
            }
            else
            {
                printf("Please enter a suitable input (number that is not 0). \n");
                while (getchar() != '\n');
            }
        }
    }
    else
    {
        while(1)
        {
            printf("Enter second number: ");
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
    }

    printf("%d %c %d = ", num1, function, num2);

    if(function == '+')
    {
        answer = add(num1, num2);
    }
    else if(function == '-')
    {
        answer = subtract(num1, num2);
    }
    else if(function == '*')
    {
        answer = multiply(num1, num2);
    }
    else if(function == '/')
    {
        answer = divide(num1, num2);
    }
    printf("%d",answer);

    return 0;
}

int add(int input1, int input2)
{
    return input1 + input2;
}

int subtract(int input1, int input2)
{
    return input1 - input2;
}

int multiply(int input1, int input2)
{
    return input1 * input2;
}

int divide(int input1, int input2)
{
    return input1 / input2;
}
