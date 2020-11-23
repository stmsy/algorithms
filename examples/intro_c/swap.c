#include <stdio.h>


int main()
{
    double first, second, temp;

    printf("Enter a first number: ");
    scanf("%lf", &first);
    printf("Enter a second number: ");
    scanf("%lf", &second);

    // Assign temporarily the value of first to temp
    temp = first;

    first = second;

    second = temp;

    printf("First number after swapping: %lf\n", first);
    printf("Second number after swapping: %lf\n", second);

    return 0;
}
