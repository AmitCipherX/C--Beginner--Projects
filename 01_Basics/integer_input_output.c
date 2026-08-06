/*
---------------------------------------------------------
File Name   : integer_input_output.c
Author      : AmitCipherX
Date        : 06-08-2026
Language    : C
Compiler    : GCC
Description : Declares two integer variables, accepts
              input from the user, and displays them.
---------------------------------------------------------
*/
#include <stdio.h>

int main()
{
    int first_number, second_number;
    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Now enter the second number: ");
    scanf("%d", &second_number);

    printf("First number: %d\n", first_number);
    printf("Second number: %d\n", second_number);

    return 0;
}
