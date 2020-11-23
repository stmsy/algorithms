#include <stdio.h>


int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    // %c formats to the actual character
    // %d formats to the integer value of a character
    printf("ASCII value of %c: %d\n", c, c);

    return 0;
}
