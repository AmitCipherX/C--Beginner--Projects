/*
---------------------------------------------------------
File Name   : welcome_message.c
Author      : AmitCipherX
Date        : 06-08-2026
Language    : C
Compiler    : GCC
Description : Inputs the user's name and displays
              a welcome message.
---------------------------------------------------------
*/
#include <stdio.h>

int main()
{
    char name[20];
    printf("Please enter your name: ");
    scanf("%19s", name);

    printf("Welcome to %s Coding Journey!\n", name);
    return 0;
}
