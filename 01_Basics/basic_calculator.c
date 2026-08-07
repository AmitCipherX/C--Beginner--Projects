/*
    Program: Basic Calculator
    Description: A simple calculator using switch statement and do-while loop.
    Author: AmitCipherX
    Date: 07-08-2026
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    char choice;

    do
    {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter operator (+ - * /): ");
        scanf(" %c", &op);
        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (op)
        {
        case '+':
            printf("Answer = %d", num1 + num2);
            break;
        case '-':
            printf("Answer = %d", num1 - num2);
            break;
        case '*':
            printf("Answer = %d", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
            {
                printf("Answer = %d", num1 / num2);
            }
            else
            {
                printf("Division by zero is not allowed.");
            }
            break;
        default:
            printf("Error\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
