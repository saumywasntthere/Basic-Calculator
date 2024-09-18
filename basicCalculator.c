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

    printf("Enter the first number: ");
    scanf("%f", &num1);
    do
    {
        printf("Enter the second number \(not 0\): ");
        scanf("%f", &num2);
    }while (num2 == 0);
    getchar();

    printf("Choose a function \(+, -, *, /\): ");
    scanf("%c", &function);
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
    else
    {
        printf("Invalid function.");
    }

    printf("%f", result);
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
