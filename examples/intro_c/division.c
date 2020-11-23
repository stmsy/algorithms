#include <stdio.h>


int main()
{
    int a, b, q, r;

    printf("Enter a dividend: ");
    scanf("%d", &b);

    printf("Enter a divisor: ");
    scanf("%d", &a);

    // Compute the quotient
    if (a != 0)
    {
        q = b / a;
        r = b % a;
        printf("Quotient: %d\n", q);
        printf("Remainder: %d\n", r);
	return 0;
    }
    else
    {
	printf("Number cannot be divided by 0\n");
        return -1;
    }
}
