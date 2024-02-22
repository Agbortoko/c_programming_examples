#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;

    printf("Enter value of a: ");
    scanf("%lf", &a);

    printf("Enter value of b: ");
    scanf("%lf", &b);

    //swapping

    //a = (initial_a - initial_b)
    a = a - b;

    //b = (initial_a - intial_b) + initial_b = initial_a
    b = a + b;

    //a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;

    // %.2lf displays numbers up to 2 decimal places
    printf("After swapping, a = %.2lf\n", a);
    printf("After swapping, b = %.2lf", b);
    return 0;
}
