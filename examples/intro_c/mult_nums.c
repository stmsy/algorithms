#include <stdio.h>


int main()
{
    double num1, num2, prod;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    prod = num1 * num2;

    printf("Product: %.2lf\n", prod);

    return 0;
}
