#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    // for size %zu or %lu is used as format specifier

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu bytes\n", sizeof(charType));


    return 0;
}
