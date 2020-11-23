#include <stdio.h>


int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof returns the size of a variable in bytes
    printf("Size of int: %ld bytes\n", sizeof(intType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld bytes\n", sizeof(charType));

    return 0;
}
