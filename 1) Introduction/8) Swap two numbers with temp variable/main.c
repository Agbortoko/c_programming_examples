#include <stdio.h>
#include <stdlib.h>

int main()
{
    double first, second, temp;

    printf("Enter first number: ");
    scanf("%lf", &first);

    printf("Enter second number: ");
    scanf("%lf", &second);

    //value of first assigned to temp
    temp = first;

    //value of second assigned to first
    first = second;

    //value of temp (initial value of first) assigned to second
    second = temp;

    //%.3lf displays number up to 3 decimal points
    printf("\nAfter swapping, first number = %.3lf\n", first);
    printf("After swapping, second number = %.3lf", second);
    return 0;
}
