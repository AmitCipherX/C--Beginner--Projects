/*
    Program: User Input and Output
    Description: This program takes the user's first name, last name, and age as input and displays them.
    Author: AmitCipherX
    Date: 07/08/2026
*/
#include <stdio.h>

int main()
{
    char first_name[12];
    char last_name[9];
    int age;

    printf("Please enter your first name: ");
    scanf("%11s", first_name);

    printf("Please enter your last_name: ");
    scanf("%8s", last_name);

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Your name is %s %s\n", first_name, last_name);
    printf("Your age is %d\n", age);

    return 0;
}
