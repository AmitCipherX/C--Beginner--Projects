/*
---------------------------------------------------------
File Name   : data_types_sizeof.c
Author      : AmitCipherX
Date        : 06-08-2026
Language    : C
Compiler    : GCC
Description : Displays the size of basic C data types
              using the sizeof operator.
---------------------------------------------------------
*/
#include <stdio.h>

int main()
{
    // Size of int
    printf("Size of int: %d bytes\n", sizeof(int));

    // Size of char
    printf("Size of char: %d bytes\n", sizeof(char));

    // Size of float
    printf("Size of float: %d bytes\n", sizeof(float));

    // Size of double
    printf("Size of double: %d bytes\n", sizeof(double));

    return 0;
}
